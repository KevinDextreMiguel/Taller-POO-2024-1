#include"Controller.h"
void main(){
	srand(time(0));
	Controller obj;
	char tecla = NULL;
	Console::SetCursorPosition(40,15);
	cout << "Comienza Invasion";
	while (obj.getCantidad()<20)
	{
		if (_kbhit())
		{
			tecla= _getch();
			if (tecla == 'a')
				obj.insertar();
		}

		obj.eliminarElementos();
		obj.moverTodos();
		_sleep(100);
	}
	Console::SetCursorPosition(40, 15);
	cout << "Hemos sido invadidos…";
	_getch();
}