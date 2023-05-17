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
    cout << this->marca << this->decoracion << this->cosas_de_cotillon << endl;
}
;

cotillon::cotillon( string marca, string decoracion, enum cosascot cosas_de_cotillon, string nombre, int cantidad, int precio):
                    producto(nombre, cantidad, precio)
{
    marca = this->marca;
    decoracion = this->decoracion;
    cosas_de_cotillon = this->cosas_de_cotillon;
};

cotillon::~cotillon()
{
};