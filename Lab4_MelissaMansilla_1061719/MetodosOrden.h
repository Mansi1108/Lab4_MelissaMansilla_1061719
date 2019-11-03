#pragma once
#include "Pokemon.h"
class MetodosOrden
{
public:
	void BubbleS(int* vec[], int num);

	void QuickS(int* arr, int inicio, int fin);
	int Dividir(int* arr, int inicio, int fin);
public:
	MetodosOrden();
	~MetodosOrden();
};

