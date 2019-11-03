#pragma once
#include "Pokemon.h"
class Nodo
{
public:
	Nodo* siguiente;
	Nodo* anterior;
public:
	Pokemon numeroNac;
	Pokemon numeroGen;
public:
	Nodo();
	~Nodo();
};

