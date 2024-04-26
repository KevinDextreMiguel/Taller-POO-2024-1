#pragma once
#include"persona.h"
#include"Bus.h"
#include"Bicicleta.h"
#include"Carro.h"
#include<vector>

class Manejadora
{
private:
	vector<Terrestre*>objetos;
	Persona objP;
public:
	Manejadora()
	{
		objetos.push_back(new Carro());
		objetos.push_back(new Bus());
		objetos.push_back(new Bicicleta());
	}

	~Manejadora()
	{
	}

	void mostrarTodos() {
		for (int i = 0; i < objetos.size(); i++)
		{
			objetos[i]->borrar();
			objetos[i]->mover();
			objetos[i]->dibujar();
		}

		objP.borrar();
		objP.mover();
		objP.dibujar();
	}

	void direccionPersona(char tecla) {
		switch (tecla)
		{
		case 75:objP.setDx_Dy(-1,0); break;
		case 77:objP.setDx_Dy(1, 0); break;
		case 72:objP.setDx_Dy(0,-1); break;
		case 80:objP.setDx_Dy(0, 1);
		}
	}

	bool colsionObjetos() {
		bool valor = true;
		for (int i = 0; i < objetos.size(); i++)
			if (objetos[i]->colision(objP.getX(), objP.getY(), objP.getAncho(), objP.getAlto()))
				valor = false;

		return valor;
	}
};
//  IZQUIERDA  ------>75
//  ARRIBA     ------>72
//  DERECHA    ------>77
//  ABAJO      ------>80



