#include <conio.h>
#include "Controladora.h"
int main()
{
	srand(time(0));
	Controladora obj;
	clock_t tiempo = clock();
	int cont = 0;
	char tecla;
	while (obj.colision()&&obj.getvidaMonigote()>0)
	{
		Console::SetCursorPosition(90, 0); cout << obj.getvidaMonigote();

		if ((clock() - tiempo) / CLOCKS_PER_SEC >= 3 &&cont<=5) {
		
			obj.insertarVacuna();
			tiempo = clock();
			cont++;
		}

		if (_kbhit()) {
			tecla= _getch();
			obj.moverMonigote(tecla);
		}
		obj.mostrarTodos();
		_sleep(100);
	}

	_getch();
	return 0;
}
