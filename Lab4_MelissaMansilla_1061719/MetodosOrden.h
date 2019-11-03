#pragma once
#include "Pokemon.h"
class MetodosOrden
{
public:
	//Metodos sacados de las presentaciones de clase teorica.
	void BubbleS(int* vec, int num);

	void QuickS(int* arr, int inicio, int fin);
	int Dividir(int* arr, int inicio, int fin);

	bool IsSorted(int* data, int count);
	void Shuffle(int* data, int count);
	void Stupid(int* data, int count);
public:
	MetodosOrden();
	~MetodosOrden();
};

