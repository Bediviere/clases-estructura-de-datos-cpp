#include <iostream> 
#include <time.h>
#include "ArrayStack.h"
#include "LinkedStack.h"	 

using namespace std;


void generateNumbers(int *numbers, int N) {
	
	for (int i = 0; i < N; i++)
	{
		int r = rand()%11;
		numbers[i] = r;
	}
}

void showNumbers(int *numbers, int N) {
	for (int i = 0; i < N; i++)
	{
		cout<< numbers[i] << " ";
	}
	cout << endl;
}


int main()//mainStack
{
	// para comprobar el funcionamiento de la implementaci�n de la pila
	// se va a hacer el ejercicio de generar varios n�meros
	// mostrarlos por consola, despues invertirlos usando una pila y volverlos a mostrar
	srand(time(NULL));
	int N = 10;
	int *numbers = new int[N];

	generateNumbers(numbers, N);
	showNumbers(numbers, N);

	// usando la implementaci�n con elementos enlazado
	// con el estudiante se debe realizar la implementaci�n con arreglos
	IStack *stackDM = new LinkedStack();

	// insertamos los elementos de arreglo en la pila
	for (int i = 0; i < N; i++)
	{
		stackDM->push(numbers[i]);
	}
	
	// los sacamos de la pila y lo mostramos
	// como el modo de acceso a las pilas es de tipo LIFO (Last In, First Out, �ltimo en entrar, primero en salir)
	// se empezara mostrando desde el �ltimo n�mero hasta el primero
	while (!stackDM->empty())
	{
		cout << stackDM->pop() << " ";
	}
	cout << endl;
	
	delete [] numbers;
	delete stackDM;


	system("pause");
	return 0;
}