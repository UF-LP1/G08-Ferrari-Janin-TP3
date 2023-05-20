/**
 * Project Untitled
 */

#include "libreria.h"
#include "pago.h"

#ifndef _METODODEPAGO_H
#define _METODODEPAGO_H

class metododepago {
public: 
    metododepago(float abona, bool ticket_impreso, bool ticket_digital, enum pago tipo_pago);
    ~metododepago();
    
enum pago get_tipo_pago();

float get_abona();

void set_abona(int plata_ab);

private: 
    float abona;  //cantidad de plata con la que paga el cliente
    bool ticket_impreso;
    bool ticket_digital;
    enum pago tipo_pago;
};

#endif //_METODODEPAGO_H