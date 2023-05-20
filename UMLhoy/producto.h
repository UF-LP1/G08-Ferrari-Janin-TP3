/**
 * Project Untitled
 */


#ifndef _PRODUCTO_H
#define _PRODUCTO_H
#include "libreria.h"

class producto {
public: 
    producto(string nombre,  int precio, int cantidad);
    ~producto();

string get_nombre();
    
static int get_stockt();
    
int get_precio();

int get_cantidad();
    
void set_precio(int n_precio);

void set_cantidad(int cant_n);

virtual void imprimir_datos();

protected: 
    string nombre;
    static int stockt;
    int precio;
    int cantidad;
 
};

#endif //_PRODUCTO_H