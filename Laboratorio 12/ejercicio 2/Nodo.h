#ifndef NODO_H
#define NODO_H

class Nodo{
    public:
        int dato;
        Nodo* siguiente;
        int tam;
        Nodo(){}
        Nodo* agregando(Nodo*,int);
        void mostrando(Nodo*);
        Nodo* eliminar(Nodo* inicio);
        ~Nodo(){}
};

#endif