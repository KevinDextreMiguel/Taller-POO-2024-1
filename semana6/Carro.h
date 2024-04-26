#pragma once
#include"Terrestre.h"

class Carro :public Terrestre
{
public:
	Carro() :Terrestre(9, 3,2)
	{
	}

	~Carro()
	{
	}
	void dibujar() {
		Console::ForegroundColor = ConsoleColor(color);
		Console::SetCursorPosition(x, y);     cout << "__|~\\_ ";
		Console::SetCursorPosition(x, y + 1); cout << "[__|_|- ";
		Console::SetCursorPosition(x, y + 2); cout << "(_) (_)";
	}
};
