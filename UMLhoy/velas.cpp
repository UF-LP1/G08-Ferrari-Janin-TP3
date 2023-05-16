/**
 * Project Untitled
 */


#include "velas.h"

/**
 * velas implementation
 */


/**
 * @return string
 */
string velas::get_color() {
    return this->color;
}

void velas::set_tamanio(int n_tamanio){
    tamanio = n_tamanio;
    return;
}

/**
 * @return unsigned int
 */
int velas::get_tamanio() {
    return this->tamanio;
}

/**
 * @param tamaño
 * @return void
 */

velas::velas(string color, int tamanio) :producto(nombre, cantidad, precio)
{
};

velas::~velas()
{
};