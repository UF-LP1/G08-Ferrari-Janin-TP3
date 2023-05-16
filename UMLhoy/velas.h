/**
 * Project Untitled
 */


#ifndef _VELAS_H
#define _VELAS_H

#include "producto.h"
#include "libreria.h"

class velas: public producto {
public: 
    velas(string color, int tamanio);
    ~velas();

string get_color();
    
int get_tamanio();
    
/**
 * @param tamanio
 */
void set_tamanio( int n_tamanio);
private: 
    string color;
     int tamanio;
};

#endif //_VELAS_H