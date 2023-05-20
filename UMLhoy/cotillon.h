/**
 * Project Untitled
 */


#ifndef _COTILLON_H
#define _COTILLON_H
#include "libreria.h"
#include "cosascot.h"
#include "producto.h"


class cotillon: public producto {
public: 

    cotillon(string marca, string decoracion, enum cosascot cosas_de_cotillon, string nombre, int precio, int cantidad);
    ~cotillon();
    
string get_marca();
    
string get_decoracion();
    
enum cosascot get_cosas_de_cotillon();

void imprimir_datos();

bool buscarcotillon(string marcabuscar, string decoracionbuscar, enum cosascot cotillonbuscar, list<producto*> Lista);

private: 
    string marca;
    string decoracion;
    enum cosascot cosas_de_cotillon;
};

#endif //_COTILLON_H