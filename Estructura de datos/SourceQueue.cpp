#include <iostream> 
#include <time.h>
#include "ArrayQueue.h"
#include "LinkedQueue.h"
using namespace std;


void showq(IQueue *gquiz)
{
	while (!gquiz->empty())
	{
		cout  << gquiz->front() << " ";
		gquiz->pop();
	}
	cout << endl;
}
/*Queria que esta funcion ShowCola recorra desde el From hasta el Back, pero falla, por ejemplo, al darle
pop a 2 de los 3 elementos y querer volver a agregar nuevos numeros con push, 

el fallo es que el show no muestra nada hasta que hayamos dado pop a todos 
los elementos y volvamos a agregar con push desde cero*/
void ShowCola(ArrayQueue* gquiz){ 
	for(int i = gquiz->GetIndexFrom();i <= gquiz->GetIndexBack();i++){
		cout<<gquiz->GetValues()[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	// se est� utlizando la implementacion de cola con arreglos circular,
	// en la clase hacer la implementaci�n con nodos enlzadaos
	srand(time(NULL));
	IQueue *gquiz = new ArrayQueue(3);
	
	int opcion, n = NULL;
	while(1){
		
		cout<<"\nElige una opcion"<<endl;
		cout<<"1.- Push"<<endl;
		cout<<"2.- Pop"<<endl;
		cout<<"3.- Front"<<endl;
		cout<<"4.- Back"<<endl;
		cout<<"5.- Empty"<<endl;
		cout<<"6.- Size"<<endl;
		cout<<"7.- Show"<<endl;
		cout<<"8.- Close"<<endl;
		cout<<"Elige una opcion: ";cin>>opcion;
		if(opcion == 1){
			cout<<"Numero: ";cin>>n;gquiz->push(n);
		}
		else if(opcion == 2){
			cout<<"Pop: "<<gquiz->pop()<<endl;
		}
		else if(opcion == 3){
			cout<<"Front: "<<gquiz->front()<<endl;
		}
		else if(opcion == 4){
			cout<<"Back: "<<gquiz->back()<<endl;
		}
		else if(opcion == 5){
			cout<<"Empty: "<<gquiz->empty()<<endl;
		}
		else if(opcion == 6){
			cout<<"Size: "<<gquiz->size()<<endl;
		}
		else if(opcion == 7){
			//cout<<"Show: "<<endl;ShowCola((ArrayQueue*)gquiz);
			cout<<"Show: "<<endl;showq(gquiz);
			
		}
		else if(opcion == 8){
			break;
		}
	}
	/*cout << "Insertando los valores 10 12 14" << endl;
	gquiz->push(10);
	gquiz->push(12);
	gquiz->push(14);

	
	cout << "gquiz.size() : " << gquiz->size() << endl;
	cout << "gquiz.front() : " << gquiz->front() << endl;
	cout << "gquiz.back() : " << gquiz->back() << endl;

	cout << endl;
	cout << "Se hace pop  devolviendo 10 y quedando front 12 y back 14" << endl;


	cout << "gquiz.pop() : " << gquiz->pop() << endl;
	cout << "gquiz.front() : " << gquiz->front() << endl;
	cout << "gquiz.back() : " << gquiz->back() << endl;


	cout << endl;
	cout << "Se inserta 16" << endl;
	gquiz->push(16);

	cout << "gquiz.size() : " << gquiz->size() << endl;
	cout << "gquiz.front() : " << gquiz->front() << endl;
	cout << "gquiz.back() : " << gquiz->back() << endl;


	cout << endl;
	cout << "Se quitan dos valores 12 y 14 quedando solo 16" << endl;

	cout << "gquiz.pop() : " << gquiz->pop() << endl;
	cout << "gquiz.pop() : " << gquiz->pop() << endl;
	cout << "gquiz.size() : " << gquiz->size() << endl;
	cout << "gquiz.front() : " << gquiz->front() << endl;
	cout << "gquiz.back() : " << gquiz->back() << endl;

	cout << endl;
	cout << "Se insertar 18 y 20 y seguidamente se muestran todos" << endl;
	gquiz->push(18);
	gquiz->push(20);


	showq(gquiz);
	cout << endl;

	cout << "Otro ejemplo con una cola de 20 elementos, se insertan y despues se recuperan" << endl;
	
	
	int N = 20;

	IQueue* q1 = new ArrayQueue(20);
	for (int i = 0; i < N; i++)
	{
		int r = rand()% 11;
		int v = r;
		q1->push(v);
		cout << v << " ";
	}
	cout << endl;
	showq(q1);

	cout << endl;
	cout << "Insertando 20 mas en la misma cola para comprobar que funciona correctamente" << endl;

	for (int i = 0; i < N; i++)
	{
		int r = rand()% 11;
		int v = r;
		q1->push(v);
		cout << v << " ";
	}
	cout << endl;
	showq(q1);
*/


	delete gquiz;
	//delete q1;

	system("pause");
	return 0;
}