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
void empleado::llamar_cliente(int turno_llamar) {

    cout << "Turno: " << turno_llamar << endl;
    return;

}

empleado::empleado(string nombre, string apellido, int dni, string horario_trabajo, float sueldo, string sexo) :trabajadores(nombre, apellido, dni, horario_trabajo, sueldo, sexo)
    {
    };
empleado::~empleado()
{
};