#include"pila.h"
using namespace std;

pila :: pila() //constructor 
{
    top = -1;
}

void pila :: push() //metodo para agregar un elemento a la pila 
{   int x;
    
    if(pila_llena())
        cout << "ERROR, pila llena. No se pueden agregar mas elementos.\n";
    else {
        top++;
        dato[top] = x;
    }
}

int pila :: pop() //metodo para sacar un elemento de la pila 
{
    int x;

    if(!pila_vacia()){
        x = dato[top];
        top--;
        return x;
    }
    else 
        cout << " ERROR, pila vacia";
    return 0;

}

bool pila :: pila_vacia() //metodo para saber si la pila esta vacia 
{
    if(top == -1)
        return true;
    else 
        return false;
}

bool pila :: pila_llena() //metodo para saber si la pila esta llena 
{
    if(top == max)
        return true;
    else 
        return false;
}

void pila :: limpiar_pila() //metodo para limpiar/vaciar la pila
{
    top = -1; //reiniciamos el tamano de la pila
}

int pila :: cima() //metodo para obtenet el valor del tope de la pila 
{
    if(top > -1){
        return dato[top];
    } else {
        cout << "La pila esta vacia. No hay elementos. \n";
        return -1; //valor sentinela si la pila esta vacia
    }
}

int pila :: tamano() //metodo para obtener el tamano de la pila
{
    return top;
}




