/**
 * Project Untitled
 */


#ifndef _VELAS_H
#define _VELAS_H

#include "producto.h"
#include "libreria.h"

class velas: public producto {
public: 
    velas(string color, int tamanio, string nombre, int precio, int cantidad);
    ~velas();

string get_color();
    
int get_tamanio();

void imprimir_datos();

void set_tamanio( int n_tamanio);

bool buscarvela( string colorbuscar, int tamaniobuscar, list<producto*>Lista);

private: 
    string color;
     int tamanio;
};

#endif //_VELAS_H