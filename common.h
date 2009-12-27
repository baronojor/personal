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

#ifndef MyCOMMON 
#define MyCOMMON

  
typedef struct
{
	int size;
	int *numero;
} LIST_ID;

#define END_LIST  -1


/*Cordenadas*/
typedef struct
{
	float x,y,z;
}COORD;


enum ERROR
{
	E_malloc=2
} error;


#endif /* !MyCOMMON */
