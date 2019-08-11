#include "LinkedList.h"

#include <iostream> 
using namespace std;

LinkedList::LinkedList(){
    top = nullptr;
    next = nullptr;
    cantidad = 0;
}
LinkedList::~LinkedList(){
    delete top;
}
void LinkedList::add(int value){
    Node* aux = new Node(value);
    if(empty()){
       top = aux;
       next = aux;
    }else{
        next->seNext(aux);
        next = aux;
    }
    cantidad++;
}

void LinkedList::add(int value, int index){
    int cont = 0;
	Node* newNode = new Node(value);

	if (ValidIndex(index)) {

		// si se quiere añadir al principio
		if (index == 0) {
			newNode->seNext(top);
			top = newNode;
		}
		else {
			// se obtiene el anterior a la posicion donde se quiere insertar
			Node* aux = GetNode(index - 1);
			// el nuevo nodo apuntara al que estaba anteriormente en esa posicion
			newNode->seNext(aux->getNext());
			// el anterior apuntara al nuevo node
			aux->seNext(newNode);
		}

		cantidad += 1;
	}// end si es valid index
    
}


int LinkedList::remove(int index){
    int cont = 0;

	if (ValidIndex(index) ) {
		Node* aux = top;

		if (index == 0) {
			top = aux->getNext();
		}
		else {

			// se obtiene el nodo anterior al que se desea eliminar
			Node* aux = GetNode(index - 1);

			// si se desea eliminar el ultimo
			if (index == cantidad- 1) {
				// se establece que el ultimo es el nodo anterior al ultimo indice
				next= aux;
				next->seNext(nullptr);
			}
			else {
				Node *aEliminar = aux->getNext();
				aux->seNext(aEliminar->getNext());
			}
		}
		cantidad -= 1;
	}

}
int LinkedList::get(int index){
    if (ValidIndex(index)) {
		Node* aux = GetNode(index);
		return aux->getVal();
	}
	else {
		return -1;
	}
}
int LinkedList::size(){
    return cantidad;
}
bool LinkedList::empty(){
    return cantidad==0;

}
bool LinkedList::ValidIndex(int index) {
	return index >= 0 && index < cantidad;
}
Node * LinkedList::GetNode(int index) {
	int cont = 0;
	Node* aux = top;
	while (cont < index) {
		aux = aux->getNext();
		cont++;
	}
	return aux;
}