#pragma once
class Nodo
{
public:
	Nodo* siguiente;
	Nodo* anterior;
public:
	int numero;
	int valor;
public:
	Nodo();
	~Nodo();
};

