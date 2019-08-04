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
    Node* aux = new Node(value);
    if (index == 0){
            aux->seNext(top);
            top = aux;
    } else
    if(index == cantidad){
     add(value);
    }    
    else{
        Node* newaux = top;
        while(cont < index-1){
           newaux = newaux->getNext();
        }
        aux->seNext(newaux->getNext());
        newaux->seNext(aux);        
    }

cantidad+=1;
    
}


int LinkedList::remove(int index){
    int cont = 0;

    if(index >= 0 && index < cantidad){
        Node* aux = top;
       
        if(index == 0){
            top = aux->getNext(); 
            aux->seNext(nullptr);
            delete aux;
        } else {

            while(cont < index - 1){
            aux = aux->getNext();
            cont++;
            }

            if(index == cantidad - 1){
            next = aux;
            next->seNext(nullptr);
            
            }else{ 

            Node *aEliminar = aux->getNext();
            aux->seNext(aEliminar->getNext());
            }
        }
        cantidad-=1;
    }

}
int LinkedList::get(int index){
    int cont = 0;

    if(index >= 0 && index < cantidad){

        Node* aux = top;
      
        while(cont < index){
        aux = aux->getNext();
        cont++;
        }
    return aux->getVal();
    }else {
        return -1;
    }




}
int LinkedList::size(){
    return cantidad;
}
bool LinkedList::empty(){
    return cantidad==0;

}