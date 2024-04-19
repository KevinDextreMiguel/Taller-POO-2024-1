#pragma once
#include"Base.h"
class Avion2 :public Base
{
public:
	Avion2() :Base(14, 3)
	{
	}
	~Avion2()
	{
	}
	void dibujar() {
		Console::ForegroundColor = ConsoleColor(color);
		Console::SetCursorPosition(x, y);     cout << "    __!__";
		Console::SetCursorPosition(x, y + 1); cout << "_____(_)_____";
		Console::SetCursorPosition(x, y + 2); cout << "    ! ! ! ";
	}
};