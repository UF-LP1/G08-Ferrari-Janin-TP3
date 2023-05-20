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

int vajilla_descartable::get_tamanio() {
    return this->tamanio;
}

void vajilla_descartable::imprimir_datos()
{
    cout << "Articulo: "<<get_nombre() << "Nombre:" << get_nombre() << ".Tipo de vajilla:" << this->tipo_vajilla << ".Decoracion:" << this->decoracion_vajilla << endl;
}

vajilla_descartable::vajilla_descartable(enum vajilla tipo_vajilla, string decoracion_vajilla, int tamanio, string nombre, int precio, int cantidad)
                                    :producto(nombre, precio, cantidad)
{
    this->tipo_vajilla = tipo_vajilla;
    this->decoracion_vajilla = decoracion_vajilla;
    this->tamanio = tamanio;
};

vajilla_descartable::~vajilla_descartable()
{
};

bool buscarvajilla(enum vajilla vajillabuscar, string decoracionbuscada,int tamaniobuscar, list<producto*> Lista)
{
    for (list<producto*>::iterator it = Lista.begin(); it != Lista.end(); it++)
    {
            producto* aux = *it;
            if (dynamic_cast<vajilla_descartable*>(aux) != nullptr)
            {
                if ((dynamic_cast<vajilla_descartable*>(aux)->get_tipo_vajilla() == vajillabuscar) &&
                    (dynamic_cast<vajilla_descartable*>(aux)->get_decoracion_vajilla() == decoracionbuscada) &&
                    (dynamic_cast<vajilla_descartable*>(aux)->get_tamanio() == tamaniobuscar))
                {
                    return true;
                }
            }
    }
    return false;
}