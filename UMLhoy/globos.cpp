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

globos::globos(string color, string marca, string forma):producto(nombre, cantidad, precio)
{};

globos::~globos()
{
}