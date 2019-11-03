#pragma once
#include "Nodo.h"
#include "Pokemon.h"
class Lista
{
	//Lista creada en el proyecto numero 1.
public:
	Nodo* HeadL;
	Nodo* UltimoL;
	int NElementos = 0;
	void Push(int valor);
	void Pop();
public:
	Lista();
	~Lista();
};

