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
    empleado();
    ~empleado();
    /**
     * @param cliente.nturno
     */
    int llamar_cliente(int turno_llamar);

#endif //_EMPLEADO_H
};