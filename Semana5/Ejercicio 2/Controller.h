#pragma once
#include<vector>
#include"Alfa.h"
#include"Beta.h"
#include"Gamma.h"

class Controller
{
private:
	//vector<tipoDato> nombreVector;
	vector<Ovni*>ovnis;
	int contA, contB, contG;
public:
	Controller()
	{
		contA = contB= contG= 0;
	}

	~Controller()
	{
	}

	void moverTodos() {
		for (int i = 0; i < ovnis.size(); i++)
		{
			ovnis[i]->borrar();
			ovnis[i]->mover();
			ovnis[i]->dibujar();
		}
	}

	void insertar() {
		ovnis.push_back(new Alfa);
		contA++;
		if (contA % 2 == 0) {
			ovnis.push_back(new Beta);
			contB++;
		}
		if (contA % 4 == 0) {
			contG++;
			ovnis.push_back(new Gamma);
		}
	}

	int getCantidad() {
		return contA+ contB+ contG;
	}

	void eliminarElementos() {
		for (int i = 0; i < ovnis.size(); i++)
			if (ovnis[i]->getAlto() + ovnis[i]->getY()+ ovnis[i]->getDy() >= ALTO_CONSOLA)
			{
				ovnis[i]->borrar();
				ovnis.erase(ovnis.begin() + i);
			}
	}
};
