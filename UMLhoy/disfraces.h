/**
 * Project Untitled
 */


#ifndef _DISFRACES_H
#define _DISFRACES_H
#include "libreria.h"

#include "producto.h"


class disfraces: public producto {
public: 

    disfraces(string talle, string personaje, bool alquila, bool compra, string nombre, int precio, int cantidad);
    ~disfraces();
    
string get_talle();

string get_personaje();

void imprimir_datos();

bool buscar_disfraces(string tallebuscar, bool compra, list<producto*> Lista);

//stack<disfraces*> buscardisfraz(string nombre, string talle, list<producto*> Lista);

//Es la misma función que antes, porque sabemos que no es recomendable hacer un return dentro de un ciclo for
//pero teniamos varios errores que no sabiamos como solucionarlos, por eso la dejamos comentada (tambien está en el .cpp :)

private: 
    string talle;
    string personaje;
    bool alquila;
    bool compra;
};

#endif //_DISFRACES_H