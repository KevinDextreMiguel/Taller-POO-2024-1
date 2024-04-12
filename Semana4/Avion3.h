#pragma once
#include"Avion.h"

class Avion3 : public Avion
{
public:
	Avion3() :Avion(8,2)
	{
	}
	~Avion3()
	{
	}
	void dibujar() {
		Console::ForegroundColor = ConsoleColor(color);
		Console::SetCursorPosition(x, y);     cout << "   |";
		Console::SetCursorPosition(x, y + 1); cout << "--=O=--";
	}
};
