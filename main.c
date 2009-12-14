/**********************************************
 *                                            *
 * main.h                                     *
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
#include <stdlib.h>
#include <malloc.h>

#include "common.h"
#include "lector_dcd.h"


int main(int argc, char **argv)
{
	FORTRAN_file_descriptor f_dcd=55;
	int natoms, nframes; 
	float *coord;

	int i;

	i_lee_dcd_ (&f_dcd, &natoms, &nframes);

	coord = malloc(natoms * 3 * sizeof(float));
	if(coord == NULL) 
	{
		perror("main, asignando espacio para las cordenadas");
		exit(E_malloc);
	}

	printf("nframes %d,\tnatoms %d",nframes,natoms);

    lee_dcd_ (&f_dcd, coord);
	for(i = 0; i<natoms; i++)
	{
		printf("coord mol %d : %f, %f, %f \n",
				i,coord[3*i],coord[3*i+1],coord[3*i+2]);
	}

	c_lee_dcd_ (&f_dcd);

	free(coord);


	return(0);
}


