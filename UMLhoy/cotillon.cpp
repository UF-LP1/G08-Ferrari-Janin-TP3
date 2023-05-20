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
}
void cotillon::imprimir_datos()
{
    cout <<"Articulo: "<<get_nombre()<< "Marca: " << this->marca << ".Decoracion: " << this->decoracion << ".Tipo de cotillon : " << this->cosas_de_cotillon << endl;
}
;

cotillon::cotillon( string marca, string decoracion, enum cosascot cosas_de_cotillon, string nombre, int precio, int cantidad):
                    producto(nombre, precio, cantidad)
{
    this->marca = marca;
    this->cosas_de_cotillon = cosas_de_cotillon;
};

cotillon::~cotillon()
{
};

bool buscarcotillon(string marcabuscar, string decoracionbuscar, enum cosascot cotillonbuscar, list<producto*>Lista)
{
    for (list<producto*>::iterator it = Lista.begin(); it != Lista.end(); it++)
    {
            producto* aux = *it;
            if (dynamic_cast<cotillon*>(aux) != nullptr)
            {
                if ((dynamic_cast<cotillon*>(aux)->get_marca() == marcabuscar) &&
                    (dynamic_cast<cotillon*>(aux)->get_decoracion() == decoracionbuscar) &&
                    (dynamic_cast<cotillon*>(aux)->get_cosas_de_cotillon() == cotillonbuscar))
                {
                    return true;
                }
            }
    }
    return false;
}