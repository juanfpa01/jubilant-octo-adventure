#include<iostream>
#include<conio.h>
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

    for (int i = 0; i < cantProcesos; i++)
    {
        procesos.push(i);
    }
    
   while (!procesos.cola_vacia())
   {
        cout << procesos.pop() << " ";
        procesos.pop();
   }
   cout << endl;
    
    
}

void menu()
{
    int op; //opcion 
    int cantProcesos;

    cout << "Ingrese la cantidad de procesos: ";
    cin >> cantProcesos;

    cout << "1 ------> Cargar procesos. \n";
    cout << " ------> Ejecutar proceso. \n";
    cout << " ------> Terminar proceso. \n";
    cout << " ------> Listar cola de TERMINADOS \n";
    cout << " ------> Listar cola de Trazas en EJECUCION \n";
    cout << " ------> Listar cola de Trazas PENDIENTES \n";
    cout << " ------> Mostrar Pila de CONTROL DE EJECUCION \n";
    cout << " ------> Cancelar proceso. \n";
    cout << "";
    cout << "Ingrese la opcion: ";

    cin >> op;

    switch (op)
    {
    case 1:
        
        
        
        break;
    
    case 2:


        break;

    case 3:


        break;

    case 4:


        break;

    case 5:


        break;

    case 6:


        break;

    case 7:


        break;

    case 8:


        break;

    case 9:


        break;

    default:
        break;
    }
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







}