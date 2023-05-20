/**
 * Project Untitled
 */


#ifndef _TRABAJADORES_H
#define _TRABAJADORES_H

#include "establecimiento.h"
#include "libreria.h"


class trabajadores {
public: 
    trabajadores(string nombre, string apellido, int dni, string horario_trabajo, float sueldo, string sexo);
    ~trabajadores();
    
string get_nombre();
    
string get_apellido();
    
int get_dni();

void set_nombre(string n_nombre);
 
protected: 
    string nombre;
    string apellido;
    int dni;
    string horario_trabajo;
    float sueldo;
    string sexo;
};

#endif //_TRABAJADORES_H