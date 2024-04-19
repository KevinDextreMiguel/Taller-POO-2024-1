#pragma once
#include"Base.h"
class Avion4 :public Base
{
public:
	Avion4() :Base(14,3)
	{
	}
	~Avion4()
	{
	}
	void dibujar() {
		Console::ForegroundColor = ConsoleColor(color);
		Console::SetCursorPosition(x, y);     cout << "    __!__";
		Console::SetCursorPosition(x, y + 1); cout << "-----<*>-----";
		Console::SetCursorPosition(x, y + 2); cout << "    o O o";
	}
};
