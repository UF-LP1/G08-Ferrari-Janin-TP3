/**
 * Project Untitled
 */


#ifndef _CARRITODECOMPRA_H
#define _CARRITODECOMPRA_H
#include "libreria.h"
#include "cliente.h"



class carritodecompra {
public: 
    carritodecompra(int cantidadpr, int dni_cliente);
    ~carritodecompra();

int get_cantidadpr();
    
    
int get_dni_cliente();
    

float calcular_total(list<producto> Lista_comprar);

private: 
   int cantidadpr;
   int dni_cliente;

};

#endif //_CARRITODECOMPRA_H