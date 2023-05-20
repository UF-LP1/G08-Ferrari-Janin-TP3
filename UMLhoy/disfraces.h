/**
 * Project Untitled
 */


#ifndef _DISFRACES_H
#define _DISFRACES_H
#include "libreria.h"

#include "producto.h"


class disfraces: public producto {
public: 

    disfraces(string talle, string personaje, bool alquila, bool compra, string nombre, int precio, int cantidad);
    ~disfraces();
    
string get_talle();

string get_personaje();

void imprimir_datos();

//bool buscar_disfraces(string nombrebuscar, list<producto*> Lista);

private: 
    string talle;
    string personaje;
    bool alquila;
    bool compra;
    
};

#endif //_DISFRACES_H