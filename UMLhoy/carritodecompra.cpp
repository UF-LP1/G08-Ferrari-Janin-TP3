/**
 * Project Untitled
 */


#include "carritodecompra.h"
#include "libreria.h"
#include"cliente.h"
#include "producto.h"

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


float carritodecompra::calcular_total(list<producto> Lista_comprar) {

    float total = 0;
    for (producto aux : Lista_comprar) {
        int cant_int = aux.get_cantidad();
        total = total + (aux.get_precio() * aux.get_cantidad());
    }
    return total; 
}
