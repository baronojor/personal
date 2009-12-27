/**********************************************
 *                                            *
 * main.c                                     *
 *                                            *
 * Pertenece al programa C-FORTRAN.           *
 *                                            *
 * Autor: DHR                                 *
 *                                            *
 * Edición: lun dic 14 00:06:58 ART 2009      *
 * Creación: lun dic 14 00:07:12 ART 2009     *
 *                                            *
 * Programa para realizar análisis sobre      *
 * trayectorias dcd.                          *
 *                                            *
 **********************************************/


#include <stdio.h>

#include "common.h"
#include "sys_wrapers.h"
#include "lector_dcd.h"
#include "atomlist.h"


int main(int argc, char **argv)
{
	FORTRAN_file_descriptor f_dcd=55;
	int natoms, nframes; 

	int stride=1000; /*para saltear pasos*/

	COORD *coord;

	LIST_ID *oxidrilos;

	int i,j;


	oxidrilos = crear_lista(10);

	i_lee_dcd_ (&f_dcd, &natoms, &nframes);

	coord = My_malloc((size_t) natoms * 3 * sizeof(COORD));

	fprintf(stderr, "nframes %d,\tnatoms %d\n", nframes, natoms);

	for(j=0; j<nframes; j+=stride)
	{
		fprintf(stderr, "\nLeyendo foto %d\n", j);

		lee_dcd_ (&f_dcd, &natoms, coord);

		for(i = 0; i<natoms; i++)
		{
			printf( "coord mol %d : %f, %f, %f \n" ,
					i, coord[i].x, coord[i].y, coord[i].z);
		}
	}

	c_lee_dcd_ (&f_dcd);
	My_free(coord);

	eliminar_lista(oxidrilos);


	return(0);
}


