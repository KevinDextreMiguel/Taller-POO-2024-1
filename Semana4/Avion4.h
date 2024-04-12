#pragma once
#include"Avion.h"

class Avion4 : public Avion
{
public:
	Avion4() :Avion(15,4)
	{
	}

	~Avion4()
	{
	}
	void dibujar() {
		Console::ForegroundColor = ConsoleColor(color);
		Console::SetCursorPosition(x, y);     cout << "   ____ _";
		Console::SetCursorPosition(x, y + 1); cout << "| __\_\_o____/_|";
		Console::SetCursorPosition(x, y + 2); cout << "<[___\_\_-----<";
		Console::SetCursorPosition(x, y + 3); cout << "|";
	}
};
