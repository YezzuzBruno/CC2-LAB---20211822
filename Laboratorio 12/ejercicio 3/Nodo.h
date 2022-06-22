#ifndef NODO_H
#define NODO_H

class Nodo{
    public:
        int dato;
        Nodo* siguiente;
        int tam;
        Nodo(){}
        Nodo* agregando(Nodo*,int);
        Nodo* eliminar(Nodo* inicio);
        void buscar(Nodo*,int);
        void mostrando(Nodo*);
};

#endif