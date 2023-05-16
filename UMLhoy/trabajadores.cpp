/**
 * Project Untitled
 */


#include "trabajadores.h"
#include "libreria.h"

/**
 * trabajadores implementation
 */


/**
 * @param nombre
 * @param apellido
 * @param dni
 */

trabajadores::trabajadores(string nombre, string apellido,  int dni, string horario_trabajo, float sueldo, string sexo) 
{
};

trabajadores::~trabajadores() {
   };



/**
 * @return string
 */
string trabajadores::get_nombre() {
    return this->nombre;
}

/**
 * @return string
 */
string trabajadores::get_apellido() {
    return this->apellido;
}

/**
 * @return unsigned int
 */
 int trabajadores::get_dni() {
    return this->dni;
}

/**
 * @param nombre
 * @return void
 */
void trabajadores::set_nombre(string n_nombre) {
    nombre = n_nombre;
    return;
}

/**
 * @param horario_trabajo
 * @return void
 */
