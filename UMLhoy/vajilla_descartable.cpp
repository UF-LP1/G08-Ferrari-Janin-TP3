/**
 * Project Untitled
 */


#include "vajilla_descartable.h"

/**
 * vajilla_descartable implementation
 */


/**
 * @return enum vajilla
 */
enum vajilla vajilla_descartable::get_tipo_vajilla() {
    return this->tipo_vajilla;
}

/**
 * @return string
 */
string vajilla_descartable::get_decoracion_vajilla() {
    return this->decoracion_vajilla;
}

void vajilla_descartable::imprimir_datos()
{
    cout << this->tipo_vajilla << this->decoracion_vajilla << this->tamanio << endl;
}

vajilla_descartable::vajilla_descartable(enum vajilla tipo_vajilla, string decoracion_vajilla, int tamanio, string nombre, int precio, int cantidad)
                                    :producto(nombre, precio, cantidad)
{
    this->tipo_vajilla;
    this->decoracion_vajilla;
    this->tamanio;
};

vajilla_descartable::~vajilla_descartable()
{
};