#pragma once
#include"Terrestre.h"

class Bus:public Terrestre
{
public:
	Bus():Terrestre(20,4,3)
	{
	}

	~Bus()
	{
	}
	void dibujar() {
		Console::ForegroundColor = ConsoleColor(color);
		Console::SetCursorPosition(x, y);   cout << "  ________________";
		Console::SetCursorPosition(x, y+1); cout << " /_|[][][][][][][]|";
		Console::SetCursorPosition(x, y+2); cout << "(                 |";
		Console::SetCursorPosition(x, y+3); cout << " =--OO---------OO-=";
	}

};

