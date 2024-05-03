#pragma once
#include"Base.h"
class Vacuna :public Base
{
public:
	Vacuna() :Base(rand() % 80 + 20, rand() % 5 + 20, -1, 1, 6, 1, 7, 'B')
	{
		int valor = rand() % 2;
		if (valor == 1)
		{
			dx = 0;
			dy = 1;
		}
		else
		{
			dx = 1;
			dy = 0;
		}
	}
	~Vacuna() {}
	void dibujar() {
		Console::ForegroundColor = (ConsoleColor)color;
		Console::SetCursorPosition(x, y);
		cout << "|-->|";
	}
};
