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


/**
 * @param precio_total
 * @return void
 */


float carritodecompra::calcular_total(list<producto> Lista_comprar) {

    float total = 0;

    for (producto aux : Lista_comprar) {
        int cant_int = get_cantidad();
        total = total + (aux.get_precio() *cant_int);
    }

    return total; 
}
