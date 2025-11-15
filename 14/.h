#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

void Mostrar_Menu(int opcion);
int BuscarIndice();
void Elegir_Menu(int opcion);
 bool Cargar_V_deMarca(int Codmarca, int Vcodmarca[10], string Nombre, string Vnombredemarca[10]);
void Lote_procesos();
int buscarIndice();
int buscarFPIndice();
bool carga_V_productos( int codProd, string nombreProd[20], float preVenta[20], float preCompra[20], int codMarca[20], int stock [20]);

void Burbuja();
void Vbooleano_en_falso();
void productoSinVentas();

#endif // FUNCIONES_H_INCLUDED

