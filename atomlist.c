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

ATOM_ID *crear_lista(int size)
{
	return(My_malloc((size) * sizeof(ATOM_ID)) );
}


void borrar_lista(ATOM_ID *lista)
{
	My_free(lista);
}


