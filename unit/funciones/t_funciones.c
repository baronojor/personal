/*****************************************************
 * test/funciones/main.t                             *
 *                                                   *
 * parte de C-FORTRAN                                *
 *                                                   *
 * Autor: DHR                                        *
 *                                                   *
 * Creado: dom dic 27 16:47:17 ART 2009              *
 *                                                   *
 * Editado: dom dic 27 16:47:17 ART 2009             *
 *                                                   *
 * Esto permite testear minimamente las funciones de *
 * cálculo con vectores.                            *
 *****************************************************/


#include "../../common.h"
#include "../../funciones.h"
#include <stdio.h>


int main(int argc, char **argv)
{
	COORD cord[3];
	float a,b;
	
	scanf("%f %f %f %f %f %f %f", &cord[0].x, &cord[0].y, &cord[0].z, &cord[1].x, &cord[1].y, &cord[1].z, &a);
	
	printf("\nv1 = ( %f , %f , %f)", cord[0].x, cord[0].y, cord[0].z);
	printf("\nv2 = ( %f , %f , %f)", cord[1].x, cord[1].y, cord[1].z);
	printf("\na =  %f ", a);

	cord[2] = v_sum(&cord[0],&cord[1]);
	printf("\nv1+v2 = ( %f , %f , %f )", cord[2].x, cord[2].y, cord[2].z);

	cord[2] = v_dif(&cord[0],&cord[1]);
	printf("\nv1-v2 = ( %f , %f , %f )", cord[2].x, cord[2].y, cord[2].z);

	b = v_dot(&cord[0],&cord[1]);
	printf("\nv1.v2 =  %f ", b);

	cord[2] = v_prod(&a,&cord[0]);
	printf("\na v1 = ( %f , %f , %f )", cord[2].x, cord[2].y, cord[2].z);

	cord[2] = v_cross(&cord[0],&cord[1]);
	printf("\nv1 x v2 = ( %f , %f , %f )", cord[2].x, cord[2].y, cord[2].z);

	b = v_mod_2(&cord[0]);
	printf("\nv1^2 =  %f ", b);

	b = v_mod(&cord[0]);
	printf("\n|v1| =  %f ", b);

	printf("\n\n");

	return(0);

}

