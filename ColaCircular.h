#include<iostream>
#include<vector>
#include "tarea.h"
using namespace std;
#define max 10

template <typename T>
class ColaCircular
{
    public:
    //atributos 
    int inicio;
    int fin;
    int cantElementos;
    std::vector<T> cola;

    //contrtuctor
    ColaCircular() : inicio(0), fin(0), cantElementos(0) {}

    public:
    //metodos
    int siguiente( int r );
    void push(int elemento);
    int pop();
    void borrar();
    void listar();
    int frente();
    bool cola_llena();
    bool cola_vacia();
    
    
};



template <typename T>
inline int siguiente(int r)
{  
    return (r+1) % max;
}

template <typename T>
inline void push(int elemento)
{
    if(cola_llena()){
        cout << "ERROR, Cola llena \n";
    } else {
        fin = siguiente[fin];
        cola[fin] = elemento;
        cantElementos++;
    }
}

template <typename T>
inline int pop()
{
    if(!cola_vacia()){
        int tm = cola[inicio];
        inicio = siguiente(inicio);
        cantElementos--;
        return tm;
    } else {
        cout << "ERROR, Cola vacia \n";
        return 0;
    }
}

template <typename T>
inline void borrar()
{
    inicio = 0;
    fin = max -1;
    cantElementos = 0;
}

template <typename T>
inline void listar()
{
    cout << "Inicio: " << inicio << "  Fin: " << fin << endl << endl;
    if(!cola_vacia()){
       if(inicio <= fin){
         for (int i = inicio; i <= inicio; i++)
        {
            cout << " \t\t" << cola[i] << endl;
        }        
        } else {
            for (int i = 0; i <= fin; i++)
            {
            cout << " \t\t" << cola[i] << endl;
            }

            for (int i = inicio; i < max; i++)
            {
            cout << " \t\t" << cola[i] << endl;
            }
        }   
    } else {
        cout << "Cola vacia \n";
    }
}

template <typename T>
inline int frente()
{
    if(!cola_vacia()){
        return cola[inicio];
    } else {
        cout << "ERROR, Cola vacia \n";
        return 0;
    }
}

template <typename T>
inline int cola_llena()
{
    return cantElementos == max; 
}

template <typename T>
inline int cola_vacia()
{
    return cantElementos == 0;
}

