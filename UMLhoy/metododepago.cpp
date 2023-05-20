/**
 * Project Untitled
 */


#include "metododepago.h"
#include "libreria.h"
/**
 * metododepago implementation
 */

metododepago::metododepago(float abona, bool ticket_impreso, bool ticket_digital, enum pago tipo_pago) 
{
    this->abona = abona;
    this->ticket_impreso = ticket_impreso;
    this->ticket_digital = ticket_digital;
    this->tipo_pago=tipo_pago;
};
metododepago::~metododepago()
{
};

/**
 * @return enum pago
 */
enum pago metododepago::get_tipo_pago() {
    return this->tipo_pago;
}

float metododepago::get_abona() {
    return this->abona;
}

void metododepago::set_abona(int plata_ab) {
    abona = (float)plata_ab;
    return;
}

