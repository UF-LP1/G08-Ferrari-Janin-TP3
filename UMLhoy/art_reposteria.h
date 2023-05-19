/**
 * Project Untitled
 */


#ifndef _ART_REPOSTERIA_H
#define _ART_REPOSTERIA_H

#include "producto.h"
#include "libreria.h"
#include "articulorep.h"


class art_reposteria: public producto {
public: 
    art_reposteria(enum articulorep tipo_articulo, string tipo_decoracion_rep, int tamanio, string nombre, int precio);
    ~art_reposteria();


    enum articulorep get_tipo_articulo();

string get_decoracion_rep();

void imprimir_datos();

private: 
    enum articulorep tipo_articulo;
    string tipo_decoracion_rep;
    int tamanio;
};
#endif //_ART_REPOSTERIA_H