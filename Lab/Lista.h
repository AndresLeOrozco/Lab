#pragma once
#include "Nodo.h"
class Lista{
private:
	Nodo* Inicio;
	Nodo* Final;
	int cuentaNodos;
public:
	Lista();
	virtual~Lista();
	void InsertarInicio(int);
	void Borrar(int);
	Nodo* Buscar(int);
	void eliminarLista();
	void Imprimir();

};

