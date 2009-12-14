/****************************************
 *                                      *
 * atomlist.h                           *
 *                                      *
 * Este archivo pertenece a C-FORTRAN   *
 *                                      *
 * Autor DHR                            *
 *                                      *
 * Creado lun dic 14 01:51:47 ART 2009  *
 * Editado lun dic 14 01:51:47 ART 2009 *
 *                                      *
 * Rutinas para el manejo de listas de  *
 * átomos.                              *
 *                                      *
 ****************************************/

#ifndef ATOMLIST
#define ATOMLIST


ATOM_ID *crear_lista(int);

void borrar_lista(ATOM_ID *);

#endif /* !ATOMLIST */
