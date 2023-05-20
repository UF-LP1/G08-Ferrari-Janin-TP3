/**
 * Project Untitled
 */


#include "globos.h"

/**
 * globos implementation
 */


/**
 * @return string
 */
string globos::get_color() {
    return this->color;
}

/**
 * @return string
 */
string globos::get_marca() {
    return this->marca;
}

string globos::get_forma() {
    return this->forma;
}
/**
 * @param color
 * @return void
 */
void globos::set_color(string n_color) {
    color = n_color;
    return;
}

void globos::imprimir_datos()
{
    cout <<"Articulo: "<<get_nombre()<< ".Color: " << this->color << ".Marca: " << this->marca << ".Forma del globo: " << this->forma << endl;
}

globos::globos(string color, string marca, string forma, string nombre, int precio, int cantidad)
                :producto(nombre, precio, cantidad)
{
    this->color = color;
    this->marca = marca;
    this->forma = forma;
};

globos::~globos()
{
}

bool buscarglobos(string marcabuscar, string formabuscar, list<producto*> Lista)
{
    for (list<producto*>::iterator it = Lista.begin(); it != Lista.end(); it++)
    {
        producto* aux = *it;
        if (dynamic_cast<globos*>(aux) != nullptr)
        {
                if ((dynamic_cast<globos*>(aux)->get_marca() == marcabuscar) &&
                    (dynamic_cast<globos*>(aux)->get_forma() == formabuscar))
                {
                    return true;
                }
        }

    }
    return false;
}