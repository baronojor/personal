/****************************************
 *                                      *
 * atomlist.c                           *
 *                                      *
 * Este archivo pertenece a C-FORTRAN   *
 *                                      *
 * Autor DHR                            *
 *                                      *
 * Creado lun dic 14 01:51:47 ART 2009  *
 * Editado lun dic 14 01:51:47 ART 2009 *
 *                                      *
 * Rutinas para el manejo de listas de  *
 * átomos.                              *
 *                                      *
 ****************************************/

#include "common.h"
#include "sys_wrapers.h"


typedef struct
{
	int size;
	ATOM_ID *indice;
} LIST_ID;



LIST_ID * crear_lista(int size)
{
	LIST_ID *out;
	out = My_malloc(sizeof(LIST_ID));
	out->indice = My_malloc((size) * sizeof(ATOM_ID));
	out->size = size;
	return(out);
}



void borrar_lista(LIST_ID *lista)
{
	My_free(lista->indice);
	My_free(lista);
}

