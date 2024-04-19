#include"Controller.h"
void main(){
	srand(time(0));
	Controller obj;
	char tecla = NULL;
	while (true)
	{
		//si es que se presionó una tecla
		if (_kbhit())
		{
			//system("cls");
			tecla = _getch();//capturamos kuna tecla
		}

		obj.gestionar(tecla);
		_sleep(100);
	}
	_getch();
}