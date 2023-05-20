#include "libreria.h"
#include "establecimiento.h"
#include "producto.h"
#include "empleado.h"
#include "cliente.h"
#include "velas.h"
#include "cotillon.h"
#include "carritodecompra.h"
#include "art_reposteria.h"
#include "articulorep.h"
#include "trabajadores.h"
#include "encargado.h"
#include "globos.h"
#include "carritodecompra.h"
#include "metododepago.h"
#include "vajilla.h"
#include "vajilla_descartable.h"
#include "golosinas.h"
#include "disfraces.h"
#include <iostream>

//static y friend(si podemos)


int main()
{
	list<producto> Lista;
	list<producto> Lista_comprar1;
	list<producto> Lista_comprar2;

	velas vela("rojo", 2,"vela",10,200);
	globos globo("rojo", "marianita","corazon", "globo", 200,20);
	cotillon mascara("marianita"," terror",mascaras,"mascara",5,1000);
	vajilla_descartable plato(platos, "negro",1,"plato",100,15);
	golosinas chicle("beldent", chicles,"chicle",500,400);
	disfraces disfraz("mediano", "princesa", false, true,"disfraz",5,5000);
	//art_reposteria molde(moldes_tortas, 2, 1500, "molde",1,2000);


	Lista.push_back(vela);
	Lista.push_back(globo);
	Lista.push_back(mascara);
	Lista.push_back(plato);
	Lista.push_back(chicle);
	Lista.push_back(disfraz);
	//Lista.push_back(molde);

	establecimiento cot_lugar("9:00/19:00", "La Feliz", "Sarmiento 1853", 2231234567, Lista);


	bool encontrado = cot_lugar.buscarproductos("vela");

	if (encontrado == true)
		cout << "El producto se encuentra en el establecimiento" << endl;
	else
		cout << "No hay más stock" << endl;

	cliente* Camila = new cliente("Camila", "12345678","223445566","efectivo",1);
	cliente* Ana = new cliente("Ana", "1677853", "678759", "tarjeta debito", 2);
	

	velas p1 = velas("rosa", 1, "vela", 2,200);
	globos p2 = globos("rojo", "mara", "corazon", "globo", 100,20);
	vajilla_descartable p3 = vajilla_descartable(vasos, "corazones", 1, "vasos", 5,20);
	golosinas p4 = golosinas("picodulce", chupetines, "chupetin", 5,100);
	vajilla_descartable p5 = vajilla_descartable(platos, "rayado", 2, "platos", 5,30);

	carritodecompra* carroCamila = new carritodecompra(12, 12345678);
	carritodecompra* carroAna = new carritodecompra(302, 1677853);


	Camila->agregarproducto(p1,Lista_comprar1);
	Camila->agregarproducto(p2,Lista_comprar1);
	Ana->agregarproducto(p3,Lista_comprar2);
	Ana->agregarproducto(p4,Lista_comprar2);
	Ana->agregarproducto(p5, Lista_comprar2);


	empleado* Maria = new empleado("Maria", "Durand", 344433, "7:00/19:00", 250, "femenino");
	empleado* Saul = new empleado("Saul", "Lezama", 71816, "7:00/19:00", 250, "masculino");

	Maria->llamar_cliente(Camila->get_nturno());
	Saul->llamar_cliente(Ana->get_nturno());

	float ptotalC = 0;
	ptotalC = carroCamila->calcular_total(Lista_comprar1);
	cout << "El precio total a pagar por Camila es:" << ptotalC<< endl;

	float ptotalA = 0;
	ptotalA= carroAna->calcular_total(Lista_comprar2);
	cout << "El precio total a pagar por Ana es:" << ptotalA << endl;

	float pagacon1 = 0;
	float pagacon2 = 0;

	cout << "Ingrese la cantidad de plata con la que abona el primer cliente" << endl;
	cin >> pagacon1;

	cout << "Ingrese la cantidad de plata con la que abona el segundo cliente" << endl;
	cin >> pagacon2;


	encargado* encargado1 = new encargado("Isabella", "Ferrari", 900000, "7:00/17:00", 1000.0, "femenino");
	encargado* encargado2 = new encargado("Emilia", "Janin", 4574446, "9:00/13:00", 100.0, "femenino");


	float vuelto1 = 0;
	float vuelto2 = 0;
	
	try 
	{
		vuelto1 = encargado1->vuelto(pagacon1, ptotalC);
		vuelto2 = encargado2->vuelto(pagacon2, ptotalA);
	}

	catch (invalid_argument& e) {
		cerr << e.what() << endl;
	}


	delete Camila;
	delete Ana;
	delete carroCamila;
	delete carroAna;
	delete Maria;
	delete Saul;
	delete encargado1;
	delete encargado2;

	return 0;
}

