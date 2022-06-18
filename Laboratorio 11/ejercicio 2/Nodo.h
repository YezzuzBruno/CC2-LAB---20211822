#ifndef NODO_H
#define NODO_H

class Nodo{
    public:
        int dato;
        Nodo* siguiente;
        int tam;
        Nodo(){}
        Nodo* push(Nodo*,int);
        void mostrando(Nodo*);
        Nodo* pop(Nodo* inicio);
};

#endif