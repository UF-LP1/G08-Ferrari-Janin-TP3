/**
 * Project Untitled
 */


#ifndef _PRODUCTO_H
#define _PRODUCTO_H
#include "libreria.h"

class producto {
public: 
    producto(string nombre,  int precio);
    ~producto();
/**
 * @param nombre
 * @param cantidad
 * @param precio
 */

string get_nombre();
    
static int get_cantidad();
    
int get_precio();
    
/**
 * @param precio
 */
void set_precio(int n_precio);

virtual void imprimir_datos();
    
/**
 * @param nombre
 */


protected: 
    string nombre;
    static int cantidad;
    int precio;
    
 
};

#endif //_PRODUCTO_H