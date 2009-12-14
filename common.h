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

/*Indice de atomos*/
typedef int ATOM_ID;


typedef struct
{
	int size;
	ATOM_ID *indice;
} LIST_ID;



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
