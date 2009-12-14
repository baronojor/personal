/**********************************************
 *                                            *
 * common.h                                   *
 *                                            *
 * Pertenece al programa C-FORTRAN.           *
 *                                            *
 * Autor: DHR                                 *
 *                                            *
 * Edición: lun dic 14 00:06:58 ART 2009      *
 * Creación: lun dic 14 00:07:12 ART 2009     *
 *                                            *
 * Definiciones comunes a todos los archivos. *
 *                                            *
 **********************************************/

#ifndef COMMON_DEF 
#define COMMON_DEF

/*Indice de atomos*/
typedef int ATOM_ID;

/*Cordenadas*/
typedef float COORD;

enum ERROR
{
	E_malloc=2
} error;


#endif /* !COMMON_DEF */
