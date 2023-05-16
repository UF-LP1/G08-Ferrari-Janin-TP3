/**
 * Project Untitled
 */


#include "golosinas.h"

/**
 * golosinas implementation
 */


/**
 * @return enum t_golosinas
 */
enum t_golosinas golosinas::get_tipo_golosina() {
    return this->tipo_golosina;
}

/**
 * @param marca
 * @return void
 */
void golosinas::set_marca(string n_marca) {
    marca = n_marca;
    return;
}

golosinas::golosinas(string marca, enum t_golosinas tipo_golosinas) :producto(nombre, cantidad, precio)
{};

golosinas::~golosinas()
{
};