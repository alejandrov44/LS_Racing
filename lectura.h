/***********************************************
*
* @Proposito: Almacena las funciones de la lectura de ficheros
* @Autor/s: Alejandro Viana Labà - Blai Jordan Borobia | Logins: alejandrov44 - blakjord
* @Fecha creacion: 3/3/20
* @Fecha ultima modificacion: 14/03/2025
*
************************************************/

#ifndef LS_RACING_LECTURA_H
#define LS_RACING_LECTURA_H
#include "lista.h"

General lecturaFicheros(char *argv[]);
General lecturaPiezas(char *argv, General general);
General lecturaGPs(char *argv, General general);
General lecturaCorredores(char *argv, General general);
General lecturaBase(char *argv, General general);


#endif //LS_RACING_LECTURA_H
