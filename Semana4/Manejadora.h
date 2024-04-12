#pragma once
#include<vector>
#include"Raton.h"
class Manejadora
{
protected:
	vector<Raton>vecRatones;
public:
	Manejadora()
	{

	}

	~Manejadora() {}
	void generar() {
		int n = rand() % 6 + 1;
		for (size_t i = 0; i < n; i++)
		{
			vecRatones.push_back(Raton());
		}
	}
	void borrarTodos() {
		for (size_t i = 0; i < vecRatones.size(); i++)
		{
			vecRatones[i].borrar();
		}
	}
	void moverTodos() {
		for (size_t i = 0; i < vecRatones.size(); i++)
		{
			vecRatones[i].mover();
		}
	}
	void dibujarTodos() {
		for (size_t i = 0; i < vecRatones.size(); i++)
		{
			vecRatones[i].dibujar();
		}
	}
};