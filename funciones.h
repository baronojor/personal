/******************************************
 *                                        *
 * funciones.h                            *
 *                                        *
 * Pertenece al programa C-FORTRAN        *
 *                                        *
 * Autor DHR                              *
 *                                        *
 * Creado: dom dic 27 16:50:31 ART 2009   *
 * Editado: dom dic 27 16:50:31 ART 2009  *
 *                                        *
 * Funciones con vectores.                *
 *                                        *
 ******************************************/
#ifndef FUNCIONES
#define FUNCIONES

#include "common.h"
COORD v_sum (COORD *, COORD *);

COORD v_dif (COORD *, COORD *);

float v_dot (COORD *, COORD *);

COORD v_prod (float *, COORD *);

COORD v_cross (COORD *, COORD *);

float v_mod_2 (COORD *);

float v_mod (COORD *);

#endif /* !FUNCIONES */
