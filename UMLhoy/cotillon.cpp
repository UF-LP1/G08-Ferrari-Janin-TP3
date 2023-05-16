/**
 * Project Untitled
 */


#include "cotillon.h"

/**
 * cotillon implementation
 */


/**
 * @return string
 */
string cotillon::get_marca() {
    return this->marca;
}

/**
 * @return string
 */
string cotillon::get_decoracion() {
    return this->decoracion;
}

/**
 * @return enum cosascot
 */
enum cosascot cotillon::get_cosas_de_cotillon() {
    return this->cosas_de_cotillon;
};

cotillon::cotillon( string marca, string decoracion, enum cosascot cosas_de_cotillon):producto(nombre, cantidad, precio)
{
    marca = this->marca;
    decoracion = this->decoracion;
    cosas_de_cotillon = this->cosas_de_cotillon;
};

cotillon::~cotillon()
{
};