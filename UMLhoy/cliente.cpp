/**
 * Project Untitled
 */


#include "cliente.h"

/**
 * cliente implementation
 */


/**
 * @return unsigned int
 */
int cliente::get_nturno() {
    return this->nturno;
}

/**
 * @return string
 */
string cliente::get_telefono() {
    return this->telefono;
}

/**
 * @param nturno
 * @return void
 */
void cliente::set_numturno(int nuevo_nturno) {
    nturno = nuevo_nturno;
    return;
}

/**
 * @param metodo_pago
 * @return void
 */
void cliente::set_metodo_pago(string n_metodo_pago) {
    metodo_pago = n_metodo_pago;
    return;
}

void cliente::agregarproducto(producto producto_agregar,list<producto>& Lista_comprar) {

    Lista_comprar.push_back(producto_agregar);
}
/**
 * @param establecimiento.telefono
 * @return void
 */



cliente::cliente(string nombre, const string DNI, string telefono, string metodo_pago, int nturno): DNI(DNI)
{
    this->nombre = nombre;
    this->telefono = telefono;
    this->metodo_pago = metodo_pago;
    this->nturno = nturno;
    Lista_comprar = list<producto>();
};

cliente::~cliente() {

};