#include<iostream>
#include <windows.h>
#include<stdio.h>
#include<string>
#include<vector>
#include "pila.h"
#include "ColaLineal.h"
#include "ColaCircular.h"
using namespace std;
//#define maxP 10
//#define maxT 12

//void cargarProcesos(int cantProcesos)
/*{
    int maxP = 1;
    int maxT = 1;
    int cantTrazas;
    //int procesos[maxP][maxT];
    //vector<vector<int>> procesos(maxP , vector<int>(maxT, 0));
    int procesos[maxP][maxT];

    for (int i = 0; i < cantProcesos; i++)
    {
        cout << "Proceso " << i << endl;
        cout << "Ingresar cantidad de trazas:";
        cin >> cantTrazas;

        maxP = cantProcesos;
        maxT = cantTrazas;

        for (int j = 0; j < maxT; j++)
        {
            procesos[i][j] = j;
        }
        
    }
    
    
    
}*/

void cargador(int cantProcesos)
{
    ColaLineal procesos;
    int valor_actual=0;
    ColaLineal Temporal;
    for (int i = 0; i < cantProcesos; i++)
    {
        procesos.push(i);
    }
    
   while (!procesos.cola_vacia())
   {
       valor_actual=procesos.pop();
        cout << valor_actual << " ";
       temporal.push(valor_actual);        
   }
    while (!temporal.cola_vacia())
   {
      procesos.push(temporal.pop());       
   }
    
   cout << endl;
    
    
}

void menu()
{
    int op; //opcion 
    int cantProcesos=0;
    bool salir=False;
do
    {
    cout << "Ingrese la cantidad de procesos: ";
    cin >> cantProcesos;

    cout << " 1 ------> Cargar procesos. \n";
    cout << " 2------> Ejecutar proceso. \n";
    cout << " 3------> Terminar proceso. \n";
    cout << " 4------> Listar cola de TERMINADOS \n";
    cout << " 5------> Listar cola de Trazas en EJECUCION \n";
    cout << " 6------> Listar cola de Trazas PENDIENTES \n";
    cout << " 7------> Mostrar Pila de CONTROL DE EJECUCION \n";
    cout << " 8------> Cancelar proceso. \n";
    cout << " 9------> salir
    cout << "";
    cout << "Ingrese la opcion: ";

    cin >> op;

    switch (op)
    {
    case 1:
        system("CLS");
        cout << " 1 ------> Cargar procesos. \n";
        
        
        break;
    
    case 2:
        system("CLS");
        cout << " 2------> Ejecutar proceso. \n";

        break;

    case 3:
        system("CLS");
        cout << " 3------> Terminar proceso. \n";

        break;

    case 4:
        system("CLS");
        cout << " 4------> Listar cola de TERMINADOS \n";

        break;

    case 5:
        system("CLS");
        cout << " 5------> Listar cola de Trazas en EJECUCION \n";

        break;

    case 6:
        system("CLS");
        cout << " 6------> Listar cola de Trazas PENDIENTES \n";

        break;

    case 7:
        system("CLS");
        cout << " 7------> Mostrar Pila de CONTROL DE EJECUCION \n";

        break;

    case 8:
        system("CLS");
        cout << " 8------> Cancelar proceso. \n";

        break;

    case 9:
        system("CLS");
        cout << " 9------> salir
        salir==True;
        break;

    default:
        cout<<"valor invalido"<<endl;
        break;
    }
    } while(salir==false)
}


int main()
{

    /*pila control(); //pila de control de ejecucion de las trazas de los procesos(historial)
    ColaCircular listos(); //cola procesos listo para su ejecucion
    ColaLineal ejecucion(); //cola de trazas en ejecucion 
    ColaLineal pendientes(); //cola de trazas pendientes 
    ColaLineal terminados(); //cola procesos terminados
    ColaLineal cancelados(); //cola procesos cancelados 
    */

    //menu();

    cargador(3);
    cout << "mano porfavor compila \n";
    system("CLS");
    menu();




return 69;

}
