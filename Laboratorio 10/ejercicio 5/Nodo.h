#ifndef NODO_H
#define NODO_H

class Nodo{
    public:
        int dato;
        Nodo* siguiente;
        int tam;
        Nodo(){}
        Nodo* agregandoF(Nodo*,int);
        void mostrando(Nodo*);
        Nodo* eliminarI(Nodo* inicio);
};

#endif