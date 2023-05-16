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

vajilla_descartable::vajilla_descartable(enum vajilla tipo_vajilla, string decoracion_vajilla, int tamanio) : producto(nombre, cantidad, precio)
{};

vajilla_descartable::~vajilla_descartable()
{
};