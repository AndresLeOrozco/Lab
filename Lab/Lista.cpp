#include "Lista.h"
Lista::Lista(){
	Inicio = nullptr;
	Final = nullptr;
	cuentaNodos = 0;
}
Lista::~Lista() { eliminarLista(); }
void Lista::InsertarInicio(int x){
	if (!Inicio) {
		Inicio = new Nodo(x);
		Final = Inicio;
		cuentaNodos++;
	}
	else {
		Nodo* p = new Nodo(x,Inicio);
		
		Inicio = p;
		Inicio->getSiguiente()->setAnterior(Inicio);
		cuentaNodos++;
	}

}
void Lista::Borrar(int pos){
	Nodo* p = Inicio;
	if (pos > 0 && pos <= cuentaNodos) {
		while (pos != 1) {
			p = p->getSiguiente();
			pos--;
		}
		Nodo* aux = p->getSiguiente();
		p->setSiguiente(aux->getSiguiente());
		delete aux;
	}
	else
		cout << "Posicion Incorrecta" << endl;
}
Nodo* Lista::Buscar(int pos){
	Nodo* p = Inicio;
	if (pos > 0 && pos <= cuentaNodos) {
		while (pos != 0) {
			p = p->getSiguiente();
			pos--;
		}
		return p;
	}
	else
		cout << "No existe esa posicion" << endl;
}
void Lista::eliminarLista(){
	Nodo* p = Inicio;
	while (p) {
		
		Inicio = Inicio->getSiguiente();
		delete p;
		p = Inicio;
	}

}
void Lista::Imprimir() {
	Nodo* p = Inicio;
	while (p) {
		cout << "Valor: " << p->getValor() << " ";
		p = p->getSiguiente();
	}

}