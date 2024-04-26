#include"Manejadora.h"
using namespace std;
void main(){
	srand(time(0));
	Manejadora obj;

	while (obj.colsionObjetos())
	{
		if (_kbhit()) {
			char tecla= _getch();
			obj.direccionPersona(tecla);
		}

		obj.mostrarTodos();
		_sleep(100);
	}
	cout << "Atropellado";
	_getch();
}