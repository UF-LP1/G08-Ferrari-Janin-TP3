/**
 * Project Untitled
 */


#include "art_reposteria.h"
#include "libreria.h"


/**
 * art_reposteria implementation
 */

art_reposteria::art_reposteria(enum articulorep tipo_articulo, string tipo_decoracio_rep, int tamanio) : producto(nombre, cantidad, precio) {
};


/**
 * @return enum articulorep
 */
 enum articulorep art_reposteria::get_tipo_articulo() {
 
    return this-> tipo_articulo;
}

/**
 * @return string
 */
string art_reposteria::get_decoracion_rep() {
    return this->tipo_decoracion_rep;
}

art_reposteria::~art_reposteria()
{
};
