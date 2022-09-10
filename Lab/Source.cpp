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
	//try {
		cout << endl << endl;
		if (lis->Buscar(1))
			cout << lis->Buscar(1)->getValor() << endl;
		if (lis->Buscar(5))
			cout << lis->Buscar(5)->getValor() << endl;
	//}
	/*catch (...) {
		cout << "Posicion Incorrecta" << endl;
	}*/
	delete lis;
	return 0;
}
//