#ifndef NODO_H
#define NODO_H

class Nodo{
    public:
        int dato;
        Nodo* siguiente;
        Nodo(){}
        Nodo* agregandoI(Nodo*,int);
        void mostrando(Nodo*);
};

#endif