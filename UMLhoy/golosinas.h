/**
 * Project Untitled
 */


#ifndef _GOLOSINAS_H
#define _GOLOSINAS_H

#include "producto.h"
#include "libreria.h"
#include "t_golosinas.h"


class golosinas: public producto {
public: 

    golosinas(string marca, enum t_golosinas tipo_golosinas);
    ~golosinas();
    
enum t_golosinas get_tipo_golosina();
    
/**
 * @param marca
 */
void set_marca(string n_marca);

private: 
    string marca;
    enum t_golosinas tipo_golosina;
};

#endif //_GOLOSINAS_H