#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string>
#include<vector>
using namespace std;
#define max 10

class ColaCircular
{
    public:
    //atributos 
    int inicio;
    int fin;
    int cantElementos;
    int cola[max];

    //contrtuctor
    ColaCircular();

    public:
    //metodos
    int siguiente( int );
    void push(int);
    int pop();
    void borrar();
    void listar();
    int frente();
    bool cola_llena();
    bool cola_vacia();
    
    
};


