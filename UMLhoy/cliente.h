/**
 * Project Untitled
 */


#ifndef _CLIENTE_H
#define _CLIENTE_H
#include "libreria.h"
#include "producto.h"

class cliente {
public: 
    cliente(string nombre, const string DNI, string telefono, string metodo_pago, int nturno);
    ~cliente();

int get_nturno();

string get_telefono();

void set_numturno(int nuevo_nturno);

void set_metodo_pago(string n_metodo_pago);

void agregarproducto(producto producto_agregar, list<producto>& Lista_comprar);

private: 
    string nombre;
    const string DNI;
    string telefono;
    string metodo_pago;
    int nturno;
    list<producto> Lista_comprar;
};

#endif //_CLIENTE_H