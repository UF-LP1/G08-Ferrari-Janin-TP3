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

string golosinas ::get_marca() {
    return this->marca;
}

void golosinas::imprimir_datos()
{
    cout <<"Articulo: "<<get_nombre() << ".Marca:" << this->marca << ".Tipo de golosina:" << this->tipo_golosinas << endl;
}

golosinas::golosinas(string marca, enum t_golosinas tipo_golosinas, string nombre, int precio, int cantidad)
                        :producto(nombre, precio, cantidad)
{
    this->marca = marca;
    this->tipo_golosinas = tipo_golosinas;
};

golosinas::~golosinas()
{
};

bool buscargolosinas( string marcabuscar, enum t_golosinas tipogol_buscar, list<producto*> Lista)
{
    for (list<producto*>::iterator it = Lista.begin(); it != Lista.end(); it++)
    {
            producto* aux = *it;
            if (dynamic_cast<golosinas*>(aux) != nullptr)
            {
                if ((dynamic_cast<golosinas*>(aux)->get_marca() == marcabuscar) &&
                    (dynamic_cast<golosinas*>(aux)->get_tipo_golosinas() == tipogol_buscar))
                {
                    return true;
                }
            }
    }
    return false;
}