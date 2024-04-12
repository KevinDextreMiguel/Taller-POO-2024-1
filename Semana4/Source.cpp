#include"Jugar.h"
#include"Triangulo.h"
#include"Manejadora.h"
void ejercicio1(){
	Jugar objJugar;
	char tecla=NULL;
	while (true)
	{
		if (_kbhit()) {
			system("cls");
			tecla = getch();
		}
		objJugar.Elegir(tecla);
		_sleep(100);
	}
}
void ejercicio2(){
	Triangulo obj(9, '*');
	obj.graficar();
}
void ejercicio3(){
	Manejadora obj;
	obj.generar();
	while (true)
	{
		obj.borrarTodos();
		obj.moverTodos();
		obj.dibujarTodos();
		_sleep(100);
	}
}
int main() {
	//int ANCHO_CONSOL = 120;
	//int ALTO_CONSOL = 30;
	//Console::SetWindowSize(ANCHO_CONSOL, ALTO_CONSOL);
	srand(time(0));
	Console::CursorVisible = false;
	int opc;
	cin >> opc;
	switch (opc)
	{
	case 1:ejercicio1(); break;
	case 2:ejercicio2(); break;
	case 3:ejercicio3(); 
	}

	getch();
	return 0;
}

