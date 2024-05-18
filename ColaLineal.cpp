#include"ColaLineal.h"
using namespace std;

ColaLineal:: ColaLineal() //constructor 
{
    frente = 0;
    final = -1;
}

void ColaLineal:: push( int elemento/*tipoDeDato& elemento*/) //agrega un elemento al final de la cola 
{
    if(!cola_llena()){
        cola[++final] = elemento;
    } else {
        throw "Overflow en la cola \n";
    }
}

int ColaLineal:: pop (int elemento) //retira el elemento frente de la cola 
{
    if(!cola_vacia()){
        return cola[final++];
    } else {
        throw "Cola vacia \n";
    }
}

void ColaLineal:: borrar() //reinicia la cola 
{
    frente = 0;
    final = -1;
}

bool ColaLineal:: cola_vacia() //comprueba si la cola esta vacia 
{
    return frente > final; 
}

bool ColaLineal:: cola_llena() //comprueba si la cola esta llena
{
    return final == max -1;
}

int ColaLineal:: Frente() //devuelve el elemento frente 
{
    if(!cola_vacia()){
        return cola[frente];
    } else {
        //throw "Cola Vacia \n";
        cout << "Cola vacia \n";
    }
}

void ColaLineal:: tamano() //devuelve el tamano de la cola
{
    return final;
}
