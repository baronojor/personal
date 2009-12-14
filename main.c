#include <stdio.h>
#include <malloc.h>
#include "lector_dcd.h"

int main(int argc, char **argv)
{
	int f_dcd=56, natoms, nframes; 
	float *coord;

	int i;

	i_lee_dcd_ (&f_dcd, &natoms, &nframes);

	coord = malloc(natoms * 3 * sizeof(float));
	if(coord == NULL) 
	{
		printf("No se pudo asignar el espacio para las coordenadas.");
		fflush(stdout);
		return(2);
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


