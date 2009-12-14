/*****************************************
 *                                       *
 * sys_wrapers.c                         *
 *                                       *
 * Pertenece al programa C-FORTRAN       *
 *                                       *
 * Autor: DHR                            *
 *                                       *
 * Creado: lun dic 14 02:01:07 ART 2009  *
 * Editado: lun dic 14 02:01:23 ART 2009 *
 *                                       *
 *****************************************/
#include <stdlib.h>
#include <stdio.h>

void *My_malloc (size_t size)
{
	void *out;

	out = malloc(size);
	if(out == NULL) 
	{
		perror("My_malloc()");
		exit(2);
	}
	return(out);
}


void My_free(void *ptr)
{
	free(ptr);
}



