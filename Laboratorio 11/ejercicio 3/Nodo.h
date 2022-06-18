#ifndef NODO_H
#define NODO_H

class Nodo{
    public:
        int dato;
        Nodo* siguiente;
        int tam;
        Nodo(){}
        Nodo* push(Nodo*,int);
        Nodo* pop(Nodo* inicio);
        void buscar(Nodo*,int);
        void mostrando(Nodo*);
};

#endif