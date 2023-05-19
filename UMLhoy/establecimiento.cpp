/**
 * Project Untitled
 */


#include "establecimiento.h"
#include "disfraces.h"
#include "velas.h"
#include "art_reposteria.h"
#include "cotillon.h"
#include "vajilla_descartable.h"
#include "globos.h"
#include "golosinas.h"
/**
 * establecimiento implementation
 */


/**
 * @param horario
 * @param nombre
 * @param direccion
 * @param telefono
 */


bool establecimiento::buscarproductos(string nombre)
{   
    list<producto>::iterator it = Lista.begin();
    while (it != Lista.end()) {
        if (it->get_nombre() == nombre) {
            producto aux = *it;
            return true;
        }
        it++;
    }
    return false;
};

/**
 * @return string
 */
string establecimiento::get_horario() {
    return this->horario;
}

/**
 * @return string
 */
string establecimiento::get_nombre() {
    return this->nombre;
}

/**
 * @return void
 */
string establecimiento::get_direccion() {
    return this->direccion;
}

/**
 * @return unsigned int
 */
 int establecimiento::get_telefono() {
    return this->telefono;
}

/**
 * @param nombre
 * @return void
 */
void establecimiento::set_nombre(string n_nombre) {
    nombre = n_nombre;
    return;
}


establecimiento::establecimiento(string horario, string nombre, string direccion, int telefono, list<producto> Lista)
{
    this->horario = horario;
    this->nombre = nombre;
    this->direccion = direccion;
    this->telefono = telefono;
    this->Lista = Lista;
   // Lista = list<producto>();
};

establecimiento::~establecimiento()
{
};

