#pragma once
#include"Base.h"
class Monigote:public Base
{
private:
	int vida;
public:
	Monigote():Base(0,0,0,0,1,2,5,'M')
	{
		vida = 3;
	}
	~Monigote(){}
	void dibujar() {
		Console::ForegroundColor = (ConsoleColor)color;
		Console::SetCursorPosition(x,y);cout << "o";
		Console::SetCursorPosition(x,y+1);cout << "+";
	}
	int getvida() { return vida; }
	void setvida(int valor) { vida+=valor; }
};
