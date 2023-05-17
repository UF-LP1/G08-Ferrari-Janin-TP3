/**
 * Project Untitled
 */


#include "art_reposteria.h"
#include "libreria.h"


/**
 * art_reposteria implementation
 */

art_reposteria::art_reposteria(enum articulorep tipo_articulo, string tipo_decoracion_rep, int tamanio, string nombre, int cantidad, int precio) : 
                                producto(nombre, cantidad, precio) {

    this->tipo_articulo;
    this->tipo_decoracion_rep;
    this->tamanio;

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

void art_reposteria::imprimir_datos()
{
    cout << this->tipo_articulo << this->tipo_decoracion_rep << this->tamanio << endl;
}

art_reposteria::~art_reposteria()
{
};
