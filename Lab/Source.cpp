#include "Lista.h"

int main() {
	Lista* lis = new Lista();

	cout << "Ingresando..." << endl;
	
	lis->InsertarInicio(1);
	lis->InsertarInicio(2);
	lis->InsertarInicio(3);
	lis->InsertarInicio(4);
	lis->InsertarInicio(5);

	lis->Imprimir();


	cout << endl<<endl;

	lis->Borrar(1);
	lis->Borrar(5);

	lis->Imprimir();

	cout << endl << endl;
	if(lis->Buscar(1)->getValor())
	cout << lis->Buscar(2)->getValor() << endl;
	if (lis->Buscar(5)->getValor())
	cout << lis->Buscar(5)->getValor() << endl;
	delete lis;
	return 0;
}