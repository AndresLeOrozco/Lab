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

	lis->Borrar()
	delete lis;
	return 0;
}