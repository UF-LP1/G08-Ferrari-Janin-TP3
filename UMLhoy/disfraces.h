/**
 * Project Untitled
 */


#ifndef _DISFRACES_H
#define _DISFRACES_H
#include "libreria.h"

#include "producto.h"


class disfraces: public producto {
public: 

    disfraces(string talle, string personaje, bool alquila, bool compra, string nombre, int precio);
    ~disfraces();
    
string get_talle();
string get_personaje();
void imprimir_datos();

private: 
    string talle;
    string personaje;
    bool alquila;
    bool compra;
    
};

#endif //_DISFRACES_H