#pragma once
#include <iostream>
using namespace std;
class Nodo{
private:
	int valor;
	Nodo* next;
	Nodo* anterior;
public:
	Nodo(int = 0, Nodo* = nullptr,Nodo* = nullptr);
	virtual~Nodo();
	void setAnterior(Nodo*);
	int getValor();
	void setSiguiente(Nodo*);
	Nodo* getAnterior();
	Nodo* getSiguiente();

};

