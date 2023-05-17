/**
 * Project Untitled
 */


#include "encargado.h"

/**
 * encargado implementation
 */


/**
 * @param carritodecompra.precio_total
 * @return int
 */
float encargado::vuelto(float plata_abona, float p_total) {

    if (plata_abona < p_total)
    {
        throw invalid_argument("Falta plata");
    }
    else
    {
        return plata_abona - p_total;
    }
}

encargado::encargado(string nombre, string apellido, int dni, string horario_trabajo, float sueldo, string sexo):trabajadores(nombre, apellido, dni, horario_trabajo, sueldo, sexo)
{};

encargado::~encargado()
{
};
