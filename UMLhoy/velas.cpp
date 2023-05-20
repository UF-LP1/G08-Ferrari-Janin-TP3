/**
 * Project Untitled
 */


#include "velas.h"

/**
 * velas implementation
 */


/**
 * @return string
 */
string velas::get_color() {
    return this->color;
}

void velas::set_tamanio(int n_tamanio){
    tamanio = n_tamanio;
    return;
}

/**
 * @return unsigned int
 */
int velas::get_tamanio() {
    return this->tamanio;
}

void velas::imprimir_datos()
{
    cout <<"Articulo: "<<get_nombre() << ".Color: " << this->color << ".Tamanio: " << this->tamanio << endl;
}



/**
 * @param tamaño
 * @return void
 */

velas::velas(string color, int tamanio, string nombre, int precio, int cantidad) :producto(nombre, precio,cantidad)
{
    this->color = color;
    this->tamanio = tamanio;
};

velas::~velas()
{
};

bool buscarvela( string colorbuscar, int tamaniobuscar, list<producto*>Lista)
{
    for (list<producto*>::iterator it = Lista.begin(); it != Lista.end(); it++)
    {
            producto* aux = *it;
            if (dynamic_cast<velas*>(aux) != nullptr)
            {
                if ((dynamic_cast<velas*>(aux)->get_color()== colorbuscar)&&
                    (dynamic_cast<velas*>(aux)->get_tamanio() == tamaniobuscar))
                {
                    return true;
                }
            }
        
    }
    return false;
}