#pragma once
#include"Terrestre.h"

class Bicicleta :public Terrestre
{
public:
	Bicicleta() :Terrestre(7, 2, 1)
	{
	}
	~Bicicleta()
	{
	}
	void dibujar() {
		Console::ForegroundColor = ConsoleColor(color);
		Console::SetCursorPosition(x, y);     cout << "/_.. ";
		Console::SetCursorPosition(x, y + 1); cout << "(o)(o)";
	}
};
