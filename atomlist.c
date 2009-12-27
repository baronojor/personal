/*******************************************************************
 *                                                                 *
 * atomlist.c                                                      *
 *                                                                 *
 * Este archivo pertenece a C-FORTRAN                              *
 *                                                                 *
 * Autor DHR                                                       *
 *                                                                 *
 * Creado lun dic 14 01:51:47 ART 2009                             *
 * Editado lun dic 14 01:51:47 ART 2009                            *
 *                                                                 *
 * Rutinas para el manejo de listas de átomos. Esto es, enteros    *
 * ya que eso son los indices de los atomos.                       *
 *                                                                 *
 * Estan implementadas como un array. Las listas están terminadas  *
 * por un elemento END_LIST a definir por el prog main.            *
 * (en este caso es cómodo -1).                                    *
 *                                                                 *
 * En este problema las listan no varían durante la ejecución      *
 * del programa.                                                   *
 *                                                                 *
 * Asume que los numeros son positivos y devuelve END_LIST como    *
 * ultimo elemento. Ojo en otros problemas.                        *
 *                                                                 *
 * TODO :   -Agregar rutinas que permitan redimencionar la lista.  *
 *                                                                 *
 *******************************************************************/



#include "common.h"
#include "sys_wrapers.h"


LIST_ID * crear_lista(int size)
{
	LIST_ID *out;
	out = My_malloc(sizeof(LIST_ID));
	out->numero = My_malloc((size + 1) * sizeof(int));
	out->numero[0] = END_LIST;
	out->size = size;
	return(out);
}


void eliminar_lista(LIST_ID *lista)
{
	My_free(lista->numero);
	My_free(lista);
}


void insertar (int nuevo, int posicion, LIST_ID *lista) 
{
	int q;

	q=posicion;

    /* do                                               */
    /*     {                                            */
    /*             lista->numero[q+1]=lista->numero[q]; */
    /*             ++q;                                 */
    /*     }while (lista->numero[q] <> END_LIST)        */

	while ( (lista->numero[q+1]=lista->numero[q]) != END_LIST)
		++q;
	
	lista->numero[posicion]=nuevo;
}


