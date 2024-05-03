#pragma once
#include<vector>
#include"Vacuna.h"
#include"Virus.h"
#include"Casa.h"
#include"Monigote.h"

class Controladora
{
private:
	vector<Base*>objetos;
	Monigote objM;
	bool inmune, terminar;
	clock_t tiempo;
public:
	Controladora()
	{
		tiempo = NULL;
		inmune = false;
		terminar = true;

		objetos.push_back(new Casa());
		for (int i = 0; i < 3; i++)
		{
			objetos.push_back(new Virus());
		}
	}

	~Controladora(){}

	void insertarVacuna() {
		objetos.push_back(new Vacuna());
	}

	void mostrarTodos() {
		objM.borrar();
		objM.mover();
		objM.dibujar();

		for (int i = 0; i < objetos.size(); i++) {
			objetos[i]->borrar();
			objetos[i]->mover();
			objetos[i]->dibujar();
		}
	}

	void moverMonigote(char tecla) {
		switch (tecla)
		{
		case 75:objM.setdx(-1); objM.setdy(0);break;//izquierda
		case 72:objM.setdx(0); objM.setdy(-1);break;//arriba
		case 77:objM.setdx(1); objM.setdy(0); break;//derecha
		case 80:objM.setdx(0); objM.setdy(1);//bajo
		}
	}

	bool colision() {
		for (int i = 0; i < objetos.size(); i++)
		{
			if (objetos[i]->colison(objM.getx(), objM.gety(), objM.getancho(), objM.getalto())) {
				if (objetos[i]->gettipo() == 'V' && !inmune) {
					objM.setx(0);
					objM.sety(0);
					objM.setvida(-1);
				}
				else if (objetos[i]->gettipo() == 'B')
				{
					inmune = true;
					tiempo = clock();
				}
				else if (objetos[i]->gettipo() == 'C')
				{
					terminar = false;
				}
			}
		}
		if ((clock() - tiempo) / CLOCKS_PER_SEC >=10)
			inmune = false;

		return terminar;
	}

	int getvidaMonigote() { return objM.getvida(); }
};
