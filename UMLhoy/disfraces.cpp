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
    cout << this->talle << this->personaje << this->alquila << this->compra << endl;
}

disfraces::disfraces(string talle, string personaje, bool alquila, bool compra, string nombre, int precio, int cantidad)
                    :producto(nombre, precio, cantidad)
{
    talle = this->talle;
    personaje = this->personaje;//este atributo es distinto de nombre, ya que por ejemplo,
    alquila = this->alquila;    //si el nombre del disfraz es "princesa", el personaje seria "Rapunzel"
    compra = this->compra;
};

disfraces::~disfraces() {

};

//bool buscar_disfraces(string nombrebuscar, list<producto*> Lista)
//{
//    for(list<producto*>::iterator it=Lista.begin();)
//}