#ifndef LINEA_H
#define LINEA_H

#include <stddef.h>
#include <stdio.h>
#include <string.h>

#include "define.h"

typedef struct nodo_linea * linea;

linea insertaLinea (linea ln, char *nombreArchivo, char *texto);
//inserta linea al final de la lista de lineas

int cantLineas (linea ln);
//devuelve la cantidad de lineas del archivo

void imprimirLineas (linea ln);
//imprime las lineas de un archivo recursivamente

void borrarLineas (linea ln, int cant);
//borra las lineas de un archivo

linea avanzaEnLineas (linea ln);
//avanza el puntero a lineas

char* devuelveContenidodeLinea (linea ln);
//devuelve el char de la linea

linea IFLinea (linea ln, char *texto, int max);
//parte de IF en linea.c

linea sangria();
//para poder hacer el type, asi le meto una linea de vivo para q tenga

linea BFlineas (linea ln);
//el borrado recursivo de adelante hacia atras


#endif
