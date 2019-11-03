#include "Lista.h"



Lista::Lista()
{
	NElementos = 0;
}


Lista::~Lista()
{
}

void Lista::Push(int value) {

	Nodo* NuevoV = new Nodo;
	NuevoV->valor = value;
	if (HeadL == nullptr)
	{
		HeadL = NuevoV;
		UltimoL = NuevoV;
		HeadL->anterior = UltimoL;
		UltimoL->siguiente = HeadL;
	}
	else
	{
		NuevoV->anterior = UltimoL;
		NuevoV->siguiente = HeadL;
		HeadL = NuevoV;
		UltimoL->siguiente = HeadL;
		(HeadL->siguiente)->anterior = HeadL;
	}
	NElementos++;
}

void Lista::Pop() {
	Nodo* NValor = new Nodo;
	NValor = HeadL;
	int x = NElementos;
	for (int i = 0; i < NElementos; i++)
	{
		NValor = NValor->siguiente;
	}
}
