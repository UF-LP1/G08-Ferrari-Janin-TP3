/**
 * Project Untitled
 */


#include "art_reposteria.h"
#include "libreria.h"


/**
 * art_reposteria implementation
 */

art_reposteria::art_reposteria(enum articulorep tipo_articulo, string tipo_decoracion_rep, int tamanio,int cant_ar, string nombre, int precio, int cantidad)
    :producto(nombre, precio, cantidad) {

    this->tipo_articulo = tipo_articulo;
    this->tipo_decoracion_rep = tipo_decoracion_rep;
    this->tamanio = tamanio;
    this->cant_ar = cant_ar;


};


 enum articulorep art_reposteria::get_tipo_articulo() {
    return this-> tipo_articulo;
}

string art_reposteria::get_decoracion_rep() {
    return this->tipo_decoracion_rep;
}

void art_reposteria::imprimir_datos()
{
    cout <<"Articulo: "<<get_nombre()<< ".Tipo de articulo: "<<this->tipo_articulo<<".Tipo de decoracion: " << this->tipo_decoracion_rep << ".Tamanio: "<<this->tamanio << endl;
}

art_reposteria::~art_reposteria()
{
};

bool buscar_artrep(enum articulorep artrepbuscar, string decoracionbuscar, list<producto*> Lista)
{
    for (list<producto*>::iterator it = Lista.begin(); it != Lista.end(); it++)
    {
            producto* aux = *it;
            if (dynamic_cast<art_reposteria*>(aux) != nullptr)
            {
                if ((dynamic_cast<art_reposteria*>(aux)->get_tipo_articulo() == artrepbuscar) &&
                    (dynamic_cast<art_reposteria*>(aux)->get_decoracion_rep() == decoracionbuscar))
                {
                    return true;
                } 
            }
     }
    return false;
}
