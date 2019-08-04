#include "IQueue.h"

#pragma once
/*Implementaci�n de TDA colas usando arreglos
se va a utilizar la t�cnica de cola circular,
o sea, cuando se guarde un valor en la �ltima posici�n
pero en posiciones anteriores quedan espacios vac�os porque se hab�an liberado con el pop()
se empiezan a utilizar esos espacios nuevamente, de esta forma se puede utilizarn los N
espacios del arreglo sin necesidad de estar consumiendo tiempo cambiando los elementos de posiciones

*/
class ArrayQueue :	public IQueue
{

	int N;
	int rsize;
	int indexFrom;
	int indexBack;
	int *values;

public:
	ArrayQueue();
	ArrayQueue(int N);
	~ArrayQueue();


	void push(int value);
	int pop();
	int front();
	int back();
	int size();
	bool empty();
};

