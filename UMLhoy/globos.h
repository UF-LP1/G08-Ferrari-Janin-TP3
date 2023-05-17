/**
 * Project Untitled
 */


#ifndef _GLOBOS_H
#define _GLOBOS_H
#include "libreria.h"

#include "producto.h"


class globos: public producto {
public: 
    
    globos(string color, string marca, string forma, string nombre, int cantidad, int precio);
    ~globos();

string get_color();
    
string get_marca();
 
void set(string n_color);

void imprimir_datos();

private: 
    string color;
    string marca;
    string forma;
};

#endif //_GLOBOS_H