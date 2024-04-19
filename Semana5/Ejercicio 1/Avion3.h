#pragma once
#include"Base.h"
class Avion3 :public Base
{
public:
	Avion3() :Base(8,2)
	{
	}
	~Avion3()
	{
	}
	void dibujar() {
		Console::ForegroundColor = ConsoleColor(color);
		Console::SetCursorPosition(x, y);     cout << "   | ";
		Console::SetCursorPosition(x, y + 1); cout << "--=O=--";
	}
};
