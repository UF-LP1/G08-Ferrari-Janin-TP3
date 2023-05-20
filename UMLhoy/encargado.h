/**
 * Project Untitled
 */


#ifndef _ENCARGADO_H
#define _ENCARGADO_H

#include "trabajadores.h"
#include "trabajadores.h"


class encargado: public trabajadores {
public: 
    
    encargado(string nombre, string apellido, int dni, string horario_trabajo, float sueldo, string sexo);
    ~encargado();
    
float vuelto(float plata_abona, float p_total);
};

#endif //_ENCARGADO_H