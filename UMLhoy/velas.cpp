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

void velas::imprimir_datos()
{
    cout << this->color << this->tamanio << endl;
}



/**
 * @param tamaño
 * @return void
 */

velas::velas(string color, int tamanio, string nombre, int precio) :producto(nombre, precio)
{
    this->color;
    this->tamanio;
};

velas::~velas()
{
};