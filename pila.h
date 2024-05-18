#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string>
#include<vector>
using namespace std;
#define max 10
class pila
{
    public:
    //atributos 
    int top;
    //int dato[max];
    vector<int> dato;
    int id;


    //constructor
    pila();

    public:
    //metodos
    
    void push();
    int pop();
    bool pila_vacia();
    bool pila_llena();
    void limpiar_pila();
    int cima();
    int tamano();
};
