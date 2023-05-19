/**
 * Project Untitled
 */


#include "globos.h"

/**
 * globos implementation
 */


/**
 * @return string
 */
string globos::get_color() {
    return this->color;
}

/**
 * @return string
 */
string globos::get_marca() {
    return this->marca;
}

/**
 * @param color
 * @return void
 */
void globos::set(string n_color) {
    color = n_color;
    return;
}

void globos::imprimir_datos()
{
    cout << this->color << this->marca << this->forma << endl;
}

globos::globos(string color, string marca, string forma, string nombre, int precio, int cantidad)
                :producto(nombre, precio, cantidad)
{
    this->color;
    this->marca;
    this->forma;
};

globos::~globos()
{
}