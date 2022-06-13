#ifndef NODO_H
#define NODO_H

class Nodo{
    public:
        int dato;
        Nodo* siguiente;
        Nodo(){}
        Nodo* agregandoF(Nodo*,int);
        void agregarMedio(Nodo*,int,int);
        void mostrando(Nodo*);
        ~Nodo(){}
};

#endif