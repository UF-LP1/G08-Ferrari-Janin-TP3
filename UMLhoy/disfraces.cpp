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

void disfraces::imprimir_datos()
{
    cout <<"Articulo: "<<get_nombre()<<".Talle: "<< this->talle <<".Personaje: " << this->personaje << endl;
}

disfraces::disfraces(string talle, string personaje, bool alquila, bool compra, string nombre, int precio, int cantidad)
                    :producto(nombre, precio, cantidad)
{
    this->talle = talle;
    this->personaje = personaje;
    this->alquila = alquila;
    this->compra = compra;
};

disfraces::~disfraces() {

};

bool buscar_disfraces(string tallebuscar, list<producto*> Lista)
{
 
    for (list<producto*>::iterator it = Lista.begin(); it != Lista.end(); it++)
    {
        producto* aux = *it;//el contenido del iterador pasa a un auxiliar
        if (dynamic_cast<disfraces*>(aux) != nullptr)
            if (dynamic_cast<disfraces*>(aux)->get_talle() == tallebuscar)
            {
                return true;
            }
    }
    return false;
}