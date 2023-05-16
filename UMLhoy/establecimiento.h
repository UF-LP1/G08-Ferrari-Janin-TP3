/**
 * Project Untitled
 */


#ifndef _ESTABLECIMIENTO_H
#define _ESTABLECIMIENTO_H
#include "libreria.h"
#include "producto.h"

class establecimiento {
public: 
    
/**
 * @param horario
 * @param nombre
 * @param direccion
 * @param telefono
 */

    establecimiento(string horario, string nombre, string direccion, int telefono, list<producto> Lista);
    ~establecimiento();

bool buscarproductos(string nombre);

string get_horario();
    
string get_nombre();
    
string get_direccion();
    
int get_telefono();
    
/**
 * @param nombre
 */
void set_nombre(string n_nombre);
    
/**
 * @param horario
 */

protected: 
    
private: 
    string horario;
    string nombre;
    string direccion;
    int telefono;
    list<producto> Lista; //lista de todos los productos del local
};

#endif //_ESTABLECIMIENTO_H