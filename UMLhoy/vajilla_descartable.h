/**
 * Project Untitled
 */


#ifndef _VAJILLA_DESCARTABLE_H
#define _VAJILLA_DESCARTABLE_H

#include "producto.h"
#include "libreria.h"
#include "vajilla.h"


class vajilla_descartable: public producto {
public:
    
    vajilla_descartable(enum vajilla tipo_vajilla, string decoracion_vajilla, int tamanio, string nombre, int precio, int cantidad);
    ~vajilla_descartable();
    
enum vajilla get_tipo_vajilla();

string get_decoracion_vajilla();

int get_tamanio();

void imprimir_datos();

bool buscarvajilla( enum vajilla vajillabuscar,string decoracionbuscada, int tamaniobuscar, list<producto*> Lista);

private: 
    enum vajilla tipo_vajilla;
    string decoracion_vajilla;
    int tamanio;
};

#endif //_VAJILLA_DESCARTABLE_H