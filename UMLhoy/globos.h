/**
 * Project Untitled
 */


#ifndef _GLOBOS_H
#define _GLOBOS_H
#include "libreria.h"

#include "producto.h"


class globos: public producto {
public: 
    
    globos(string color, string marca, string forma, string nombre, int precio, int cantidad);
    ~globos();

string get_color();
    
string get_marca();

string get_forma();
 
void set_color(string n_color);

void imprimir_datos();

bool buscarglobos(string marcabuscar, string formabuscar, list<producto*> Lista);

private: 
    string color;
    string marca;
    string forma;
};

#endif //_GLOBOS_H