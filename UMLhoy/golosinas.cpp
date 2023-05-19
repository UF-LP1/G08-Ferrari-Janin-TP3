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
enum t_golosinas golosinas::get_tipo_golosinas() {
    return this->tipo_golosinas;
}

/**
 * @param marca
 * @return void
 */
void golosinas::set_marca(string n_marca) {
    marca = n_marca;
    return;
}

void golosinas::imprimir_datos()
{
    cout << this->marca << this->tipo_golosinas << endl;
}

golosinas::golosinas(string marca, enum t_golosinas tipo_golosinas, string nombre, int precio, int cantidad)
                        :producto(nombre, precio, cantidad)
{
    this->marca;
    this->tipo_golosinas;
};

golosinas::~golosinas()
{
};