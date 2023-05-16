/**
 * Project Untitled
 */


#include "disfraces.h"

/**
 * disfraces implementation
 */


/**
 * @return string
 */
string disfraces::get_talle() {
    return this->talle;
}

/**
 * @return string
 */
string disfraces::get_personaje() {
    return this->personaje;
}

disfraces::disfraces(string talle, string personaje, bool alquila, bool compra) :producto(nombre, cantidad, precio)
{
    talle = this->talle;
    personaje = this->personaje;
    alquila = this->alquila;
    compra = this->compra;
};

disfraces::~disfraces() {

};

