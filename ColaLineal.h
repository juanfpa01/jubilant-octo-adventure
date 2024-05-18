#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string>
#include<vector>
using namespace std;
#define max 10

class ColaLineal
{
    public:
    //atributos 
    int frente;
    int final; 
    //int cola[max];
    vector<int> cola;
    int elemento;

    //constructor
    ColaLineal();

    public:
    //metodos
    void crear();
    void push(int elemento);
    int pop();
    void borrar();
    int Frente();
    bool cola_vacia();
    bool cola_llena();
    int tamano();

};