/**
 * Project Untitled
 */


#ifndef _GOLOSINAS_H
#define _GOLOSINAS_H

#include "producto.h"
#include "libreria.h"
#include "t_golosinas.h"


class golosinas: public producto {
public: 

    golosinas(string marca, enum t_golosinas tipo_golosinas, string nombre, int precio, int cantidad);
    ~golosinas();
    
enum t_golosinas get_tipo_golosinas();

void set_marca(string n_marca);

void imprimir_datos();

private: 
    string marca;
    enum t_golosinas tipo_golosinas;
};

#endif //_GOLOSINAS_H