/**
 * Project Untitled
 */


#include "carritodecompra.h"
#include "libreria.h"
#include"cliente.h"

/**
 * carritodecompra implementation
 */


/**
 * @return unsigned int
 */
 
carritodecompra::~carritodecompra()
{
};

carritodecompra::carritodecompra(int cantidadpr, int dni_cliente)
{
    this->cantidadpr = cantidadpr;
    this->dni_cliente = dni_cliente;
   
}

int carritodecompra::get_cantidadpr() {
    return this->cantidadpr;
}

/**
 * @return unsigned int
 */


/**
 * @return unsigned int
 */
 int carritodecompra::get_dni_cliente() {
    return dni_cliente;
}


/**
 * @param precio_total
 * @return void
 */


float carritodecompra::calcular_total(list<producto> Lista_comprar) {

    float total = 0;
    float precio_int = 0;
    int cant_p = 0;
    list <producto> ::iterator it = Lista_comprar.begin();

    for (it; it != Lista_comprar.end(); it++) {

        cant_p = this->get_cantidadpr();
        precio_int = it->get_precio() * cant_p;
        total = total + precio_int;
    }
    return total; 
}
