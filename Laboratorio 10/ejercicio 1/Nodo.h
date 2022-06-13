#ifndef NODO_H
#define NODO_H

class Nodo{
    public:
        int dato;
        Nodo* siguiente;
        Nodo(){}
        Nodo* agregandoF(Nodo*,int);
        void mostrando(Nodo*);
};

#endif