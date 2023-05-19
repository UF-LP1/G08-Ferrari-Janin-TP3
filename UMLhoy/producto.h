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
/**
 * @param nombre
 * @param cantidad
 * @param precio
 */

string get_nombre();
    
static int get_stockt();
    
int get_precio();

int get_cantidad();
    
/**
 * @param precio
 */
void set_precio(int n_precio);

void set_cantidad(int cant_n);

virtual void imprimir_datos();
    
/**
 * @param nombre
 */


protected: 
    string nombre;
    static int stockt;
    int precio;
    int cantidad;
    
 
};

#endif //_PRODUCTO_H