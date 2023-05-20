/**
 * Project Untitled
 */


#include "producto.h"
#include "libreria.h"
/**
 * producto implementation
 */


/**
 * @param nombre
 * @param cantidad
 * @param precio
 */
int producto::stockt = 0;

producto::producto(string nombre, int precio, int cantidad) {

    this->nombre = nombre;
    this->precio = precio;
    this->cantidad = cantidad;
}

/**
 * @return string
 */
string producto::get_nombre() {
    return this->nombre;
}

/**
 * @return unsigned int
 */
int producto::get_stockt() {
    return stockt;
}

/**
 * @return unsigned int
 */
 int producto::get_precio() {
    return this->precio;
}

 int producto::get_cantidad(){
     return this->cantidad;
 }

/**
 * @param precio
 * @return void
 */
void producto::set_precio(int n_precio) {
    precio = n_precio;
    return;
}

void producto::set_cantidad(int cant_n) {
    cantidad = cant_n;
    return;
}

void producto::imprimir_datos()
{
    return;
}

//void imprimir_datos() 

/**
 * @param nombre
 * @return void
 */


producto::~producto()
{
}
