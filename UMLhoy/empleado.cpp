/**
 * Project Untitled
 */


#include "empleado.h"

/**
 * empleado implementation
 */


/**
 * @param cliente.nturno
 * @return unsigned int
 */
int empleado::llamar_cliente(int turno_llamar) {

    cout << "Turno: " << turno_llamar << endl;
    return 0;

}

empleado::empleado() :trabajadores(nombre, apellido, dni, horario_trabajo, sueldo, sexo)
    {
    };
empleado::~empleado()
{
};