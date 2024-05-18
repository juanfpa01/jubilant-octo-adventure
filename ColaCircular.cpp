#include"ColaCircular.h"
using namespace std;

ColaCircular :: ColaCircular()
{
    inicio = 0;
    fin = max -1;
    cantElementos = 0;
}

ColaCircular:: siguiente(int r)
{  
    return (r+1) % max;
}

ColaCircular:: push(int elemento)
{
    if(cola_llena()){
        cout << "ERROR, Cola llena \n";
    } else {
        fin = siguiente[fin];
        cola[fin] = elemento;
        cantElementos++;
    }
}

ColaCircular:: pop()
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

ColaCircular:: borrar()
{
    inicio = 0;
    fin = max -1;
    cantElementos = 0;
}

ColaCircular:: listar()
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

ColaCircular:: frente()
{
    if(!cola_vacia()){
        return cola[inicio];
    } else {
        cout << "ERROR, Cola vacia \n";
        return 0;
    }
}

ColaCircular:: cola_llena()
{
    return cantElementos == max; 
}

ColaCircular:: cola_vacia()
{
    return cantElementos == 0;
}