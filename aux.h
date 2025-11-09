#ifndef FUNCIONES_AUX_H_INCLUDED
#define FUNCIONES_AUX_H_INCLUDED
#endif // FUNCIONES_AUX_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;

const int cantMarcas=10;
const int cantProductos=20;
const int Fpago=5;

//Lote de Marca

struct Marcas {
    int Codigo;
    string Nombre;
};
//Lote de Productos
struct Productos {
    int Codigo;
    string Nombre;
    float Preventa;
    float Precompra;
    int Stock;
    int CodigodeMarca;
};
//lote de formas de pago
struct FormaDePago {;
    string Codigo;
    string Nombre;
    int porcentajes;
    }

void CargarDatosMarca(Marca marcas[], int cantMarcas);
void CargarDatosProducto(Producto productos[], int cantProductos);
void CargarDatosFormadePago(FormaDePago[], int Fpago);
void MostrarMenu();


