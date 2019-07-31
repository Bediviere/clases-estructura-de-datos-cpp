#include "ArrayStack.h"
 
ArrayStack::ArrayStack(){
    N = 10;
    cantidad = 0;
    elementos = new int[N];
}
ArrayStack::~ArrayStack()
{
}
void ArrayStack::push(int value){
    if(cantidad < N){
        elementos[cantidad] = value;
        cantidad+=1;
    }
    else{
        //error
    }
}
int ArrayStack::pop(){
    int valor = -1;
    if(!empty()){
        valor = elementos[cantidad - 1];
        elementos[cantidad - 1] = -1;
        cantidad-=1;
    }
    return valor;
}
int ArrayStack::top(){
    int valor = -1;
    if(!empty()){
        valor = elementos[cantidad - 1];
    }
    return valor;
}
int ArrayStack::size(){
    return cantidad;
}
bool ArrayStack::empty(){
    return cantidad == 0;
}