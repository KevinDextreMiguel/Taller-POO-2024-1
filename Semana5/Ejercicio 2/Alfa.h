#pragma once
#include"Ovni.h"

class Alfa:public Ovni

{
public:
	Alfa():Ovni(5,20,5,6)
	{

	}

	~Alfa()
	{
	}
	void dibujar() {
		Console::ForegroundColor = ConsoleColor(color);
		Console::SetCursorPosition(x,y);  cout << "     _.---._";
		Console::SetCursorPosition(x, y+1); cout << "      .' '.";
		Console::SetCursorPosition(x, y+2); cout << "_.-~===========~-._";
		Console::SetCursorPosition(x, y+3); cout << "(_________________)";
		Console::SetCursorPosition(x, y+4); cout << "    \\_______/";
	}
private:

};
