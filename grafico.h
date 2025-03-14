/***********************************************
*
* @Proposito: Almacena las funciones sobre el apartado grafico de la configuracion de nuestro piloto
* @Autor/s: Alejandro Viana Labà - Blai Jordan Borobia | Logins: alejandrov44 - blakjord
* @Fecha creacion: 3/3/20
* @Fecha ultima modificacion: 14/03/2025
*
************************************************/

#ifndef LS_RACING_GRAFICO_H
#define LS_RACING_GRAFICO_H

#include "tipos.h"

void dibujaPanelConfiguracion(General general, Coche * coche);
void pintaConfig(General general, Coche * coche, int x, int y, ALLEGRO_BITMAP * boxes, ALLEGRO_BITMAP * neumaticos, ALLEGRO_BITMAP * cotxe, ALLEGRO_BITMAP * gasolina, ALLEGRO_BITMAP * motor);

#endif //LS_RACING_GRAFICO_H
