#include <iostream> 
#include <time.h> 
#include "ArrayQueue.h"	 

using namespace std;


int factorial(int num)
{
	if (num == 1)
		return 1;
	else
		return num * factorial(num - 1);

}

// 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597
int fibonacci(int n)
{
	if (n < 2)
		return n;

	return fibonacci(n - 1) + fibonacci(n - 2);
}


int fibonacciIterativo(int n)
{
	int i = 2;
	int PT = 1; int ST = 1;
	int r = 0;
	while(i<n){
		r = PT+ST;
		PT = ST;
		ST = r;
		i+=1;
	}

	return ST;
}

long suma(long n)
{
	if(n == 1)
	{
		return 1;
	}
	return n + suma(n-1); 
}
long sumaiterativa(long n){
	long s = 0;
	for(int i = 1;i<=n;i++){
		s+=i;
	}
	return s;
}

int* slice(int *valores,int N,bool izquierda)
{
	int* arr = new int[N/2];

if(izquierda == true){
	for(int i = 0;i<N/2;i++){
			arr[i] = valores[i];
		}
	}else {
		for(int i = N/2 +1 ;i<N;i++){
			arr[i - N/2 - 1] = valores[i];
		}
	}

	return arr;
}

bool busquedaBinaria(int *valores, int N ,int valorBuscar )
{

int valor = valores[N/2];

if(valorBuscar == valor)
return true;

if(N == 0)
return false;

bool izquierda = false;

if(valorBuscar < valor)
{
izquierda = true;
}else {
izquierda = false;
}
int *valores1 = slice(valores,N,izquierda);
return busquedaBinaria(valores1,N/2,valorBuscar);

}


bool BusquedaBinaItera(int*arr, int valor, int tamanio){
	 
    bool encontrado= false; 
	
	int i = 0;
	while(!encontrado && tamanio > 0){
	
    int v = arr[tamanio/2];

	if( v == valor){
		encontrado = true;
	}else {	

bool izquierda = false;
if(v == valor)
{
izquierda = true;
}else {
izquierda = false;
}

 arr = slice(arr,tamanio,izquierda);
tamanio = tamanio/2;
	}
	}
return encontrado;
}





int main()
{
	
    int *valores = new int[10];

    valores[0] = 3;
    valores[1] = 6;
    valores[2] = 8;
    valores[3] = 12;
    valores[4] = 14;
    valores[5] = 19;
    valores[6] = 23;
    valores[7] = 55;
    valores[8] = 65;
    valores[9] = 72;


    cout<< BusquedaBinaItera(valores,72,10) << endl;     

	//cout<< factorial(3) << endl;

	//cout << fibonacci(15) << endl;
    long tim1 = time(NULL);
	//cout<<suma(1000000)<<endl;
    long tim2 = time(NULL);
	
     long result = (tim2-tim1);

	 cout << "Tiempo" << result<<endl;  


	//cout<<fibonacciIterativo(17)<<endl;
   
     tim1 = time(NULL);
	//cout<<sumaiterativa(1000000)<<endl;	
     tim2 = time(NULL);

	 result = (tim2-tim1);

	 cout << "Tiempo" << result<<endl;  

	return 0;
}