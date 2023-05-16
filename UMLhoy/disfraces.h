/**
 * Project Untitled
 */


#ifndef _DISFRACES_H
#define _DISFRACES_H
#include "libreria.h"

#include "producto.h"


class disfraces: public producto {
public: 

    disfraces(string talle, string personaje, bool alquila, bool compra);
    ~disfraces();
    
string get_talle();
string get_personaje();

private: 
    string talle;
    string personaje;
    bool alquila;
    bool compra;
    
};

#endif //_DISFRACES_H