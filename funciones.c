/******************************************
 *                                        *
 * funciones.c                            *
 *                                        *
 * Pertenece al programa C-FORTRAN        *
 *                                        *
 * Autor DHR                              *
 *                                        *
 * Creado: lun dic 14 17:24:40 ARST 2009  *
 * Editado: dom dic 27 17:39:08 ART 2009  *
 *                                        *
 * Funciones con vectores.                *
 *                                        *
 ******************************************/


#include <math.h>

#include "common.h"



COORD v_sum (COORD * v1, COORD * v2)
{
	COORD out;
	out.x = v1->x + v2->x;
	out.y = v1->y + v2->y;
	out.z = v1->z + v2->z;
	return (out);
}


COORD v_dif (COORD * v1, COORD * v2)
{
	COORD out;
	out.x = v1->x - v2->x;
	out.y = v1->y - v2->y;
	out.z = v1->z - v2->z;
	return (out);
}


float v_dot (COORD * v1, COORD * v2)
{
	float out;
	out = (v1->x * v2->x) + (v1->y * v2->y)
	      + (v1->z * v2->z);
	return (out);
}


COORD v_prod (float * a, COORD * v)
{
	COORD out;
	out.x = *a * v->x;
	out.y = *a * v->y;
	out.z = *a * v->z;
	return (out);
}


COORD v_cross (COORD *v1, COORD *v2)
{
	COORD out;
	out.x = (v1->y * v2->z) - (v1->z * v2->y);
	out.y = (v1->z * v2->x) - (v1->x * v2->z);
	out.z = (v1->x * v2->y) - (v1->y * v2->x);
	return(out);
}

float v_mod_2 (COORD *v)
{
	float out;
	out = v->x * v->x + v->y * v->y + v->z * v->z;
	return(out);
}

float v_mod (COORD *v)
{
	float out;
	out = sqrt(v_mod_2(v));
	return(out);
}

