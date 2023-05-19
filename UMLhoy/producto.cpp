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

int producto::cantidad = 0;

producto::producto(string nombre, int precio) {

    this->nombre = nombre;
    this->precio = precio;
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
int producto::get_cantidad() {
    return cantidad;
}

/**
 * @return unsigned int
 */
 int producto::get_precio() {
    return this->precio;
}

/**
 * @param precio
 * @return void
 */
void producto::set_precio(int n_precio) {
    precio = n_precio;
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
