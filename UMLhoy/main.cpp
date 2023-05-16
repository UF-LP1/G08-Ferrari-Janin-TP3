#include "libreria.h"
#include "establecimiento.h"
#include "producto.h"
#include "empleado.h"
#include "cliente.h"
#include "carritodecompra.h"
#include "trabajadores.h"
#include "encargado.h"
#include "carritodecompra.h"
#include <iostream>
#include "metododepago.h"


int main()
{
	list<producto> Lista;
	list<producto>& Lista_comprar1;
	//int* l1 = Lista_comprar1.begin();
	list<producto>& Lista_comprar2;

	producto vela("numero", 2, 200);
	producto globo("metalizado", 15, 150);
	producto cotillon("mascara", 1, 500);
	producto vajilla("plato", 20, 100);
	producto golosinas("chicles", 10, 300);
	producto disfraces("vaca", 1, 3000);
	producto art_reposteria("molde para torta", 2, 1500);

	Lista.push_back(vela);
	Lista.push_back(globo);
	Lista.push_back(cotillon);
	Lista.push_back(vajilla); 
	Lista.push_back(golosinas);
	Lista.push_back(disfraces);
	Lista.push_back(art_reposteria);


	establecimiento cot_lugar("9:00/19:00", "La Feliz", "Sarmiento 1853", 2231234567);

	bool encontrado = cot_lugar.buscarproductos("golosinas");

	if (encontrado == true)
		cout << "El producto se encuentra en el establecimiento" << endl;
	else
		cout << "No hay más stock" << endl;

	cliente* Camila = new cliente("Camila", "12345678","223445566","efectivo",1);
	cliente* Ana = new cliente("Ana", "1677853", "678759", "tarjeta debito", 2);
	

	producto p1 = { "vela",2,150 };
	producto p2 = { "globo",10,50 };
	producto p3 = { "vaso",100,200 };
	producto p4 = { "chupetin",2,100 };
	producto p5 = { "plato",200,300 };

	carritodecompra* carroCamila = new carritodecompra(12, 12345678);
	carritodecompra* carroAna = new carritodecompra(302, 1677853);


	Camila->agregarproducto(p1,Lista_comprar1);
	Camila->agregarproducto(p2,Lista_comprar1);
	Ana->agregarproducto(p3,Lista_comprar2);
	Ana->agregarproducto(p4,Lista_comprar2);
	Ana->agregarproducto(p5,Lista_comprar2);


	float ptotalC = 0;
	ptotalC = carroCamila->calcular_total(Lista_comprar1);
	cout << "El precio total a pagar por Camila es:" << ptotalC<< endl;

	float ptotalA = 0;
	ptotalA= carroCamila->calcular_total(Lista_comprar1);
	cout << "El precio total a pagar por Ana es:" << ptotalA << endl;

	float pagacon1 = 0;
	float pagacon2 = 0;

	cout << "Ingrese la cantidad de plata con la que abona el primer cliente" << endl;
	cin >> pagacon1;


	cout << "Ingrese la cantidad de plata con la que abona el segundo cliente" << endl;
	cin >> pagacon2;

	encargado* encargado1 = new encargado("Isabella", "Ferrari", 900000, "7:00/17:00", 100.0, "femenino");
	encargado* encargado2 = new encargado("Emilia", "Janin", 4574446, "9:00/13:00", 10000000.0, "femenino");

	float vuelto1 = 0;
	float vuelto2 = 0;

	vuelto1=encargado1->vuelto(pagacon1, ptotalC);
	vuelto2=encargado2->vuelto(pagacon2, ptotalA);

	cout << "El vuelto de Camila es de:" << vuelto1 << endl;
	cout << "El vuelto de Ana es de:" << vuelto2 << endl;


	delete Camila;
	delete Ana;
	delete carroCamila;
	delete carroAna;
	

	return 0;
}

