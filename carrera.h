/***********************************************
*
* @Proposito: Almacena las funciones de la carrera
* @Autor/s: Alejandro Viana Labà - Blai Jordan Borobia | Logins: alejandrov44 - blakjord
* @Fecha creacion: 3/3/20
* @Fecha ultima modificacion: 14/03/2025
*
************************************************/

#ifndef LS_RACING_CARRERA_H
#define LS_RACING_CARRERA_H

#include "tipos.h"
#include "grafico.h"

struct _node * conseguirCircuito(struct _node** head_ref, int veces);
void semaforo();
void pintarCarrera(General general, Coche coche, int numStops, int stopsDone, ALLEGRO_BITMAP * cotxe, int tiempo, float avance, const float * tiempoTotal);
void pintarPantallaInicio(struct _node circuito);
void pintarPantallaFinal(int posicion , char * nombre);
void calculosCarrera(General general, Coche coche, struct _node circuito, float * tiempoTotal, int * numStops);
void logicaCarrera(General general, Coche coche, struct _node circuito, ALLEGRO_BITMAP * cotxe, ALLEGRO_TIMER * timer, float * tiempoTotal, int numStops);
void carrera(General general, Coche coche, int veces);

#endif //LS_RACING_CARRERA_H
