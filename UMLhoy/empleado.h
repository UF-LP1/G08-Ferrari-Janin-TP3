/**
 * Project Untitled
 */


#ifndef _EMPLEADO_H
#define _EMPLEADO_H

#include "trabajadores.h"
#include "trabajadores.h"
#include "trabajadores.h"


class empleado : public trabajadores {

public:
    empleado(string nombre, string apellido, int dni, string horario_trabajo, float sueldo, string sexo);
    ~empleado();
    /**
     * @param cliente.nturno
     */
    void llamar_cliente(int turno_llamar);

#endif //_EMPLEADO_H
};