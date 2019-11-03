#include "MetodosOrden.h"
#include<stdlib.h>
#include<time.h>


void MetodosOrden::BubbleS(int* A, int n)
{
	int aux, i, j;
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n - 1; j++)
		{
			if (A[i] < A[j])
			{
				aux = A[i];
				A[i] = A[j];
				A[j] = aux;
			}
		}
	}
}

int MetodosOrden::Dividir(int* array, int inicio, int fin) 
{
	int left;
	int right; 
	int pivot; 
	int temp;
	pivot = array[inicio];
	left = inicio;
	right = fin;

	while (left < right)
	{
		while (array[right] < pivot)
		{
			right--;
		}
		while ((left < right) && (array[left] >= pivot)) 
		{
			left++;
		}
		if (left < right)
		{
			temp = array[left];
			array[left] = array[right];
			array[right] = temp;
		}
	}
	temp = array[right];
	array[right] = array[inicio];
	array[inicio] = temp;
	return right;
}
void MetodosOrden::QuickS(int* array, int inicio, int fin) {
	int pivot;
	if (inicio < fin)
	{
		pivot = Dividir(array, inicio, fin);
		QuickS(array, inicio, pivot - 1);
		QuickS(array, pivot + 1, fin);
	}
}

bool MetodosOrden::IsSorted(int* data, int count) {
	while (--count >= 1)
	{
		if (data[count] < data[count - 1])
		{
			return false;
		}
		else {
			return true;
		}
	}
}
void MetodosOrden::Shuffle(int* data, int count) {
	int temp, rnd;
	for (int i = 0; i < count; i++)
	{
		rnd = rand() % count;
		temp = data[i];
		data[i] = data[rnd];
		data[rnd] = temp;
	}
}
void MetodosOrden::Stupid(int* data, int count) {
	while (!IsSorted(data, count))
	{
		Shuffle(data, count);
	}
}

MetodosOrden::MetodosOrden()
{
}


MetodosOrden::~MetodosOrden()
{
}
