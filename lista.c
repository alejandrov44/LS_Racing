/***********************************************
*
* @Proposito: Almacena las funciones relacionadas con TADs.
* @Autor/s: Alejandro Viana Labà - Blai Jordan Borobia | Logins: alejandrov44 - blakjord
* @Fecha creacion: 3/3/20
* @Fecha ultima modificacion: 14/03/2025
*
************************************************/

#include "lista.h"

/***********************************************
*
* @Finalidad: Funcion que inserta un nuevo nodo en la lista ordenada, se comprueba si el nodo es el primero de la lista o es menor o igual al primer nodo que
*             pueda haber, y se inserta como primer nodo de la lista, si no lo es entonces va nodo a nodo hasta encontrar el nodo el cual sea mas pequeño que
*             el nuevo o el final de la lista y entonces se inserta ahi.
* @Parametros:  in: head_ref = Lista de nodos de los grandes premios.
*               in: _node = Nodo nuevo generado que insertaremos.
* @Retorno: No devuelve nada.
*
************************************************/
void sortedInsert(struct _node** head_ref, struct _node* new_node){
    struct _node * current;
    if (*head_ref == NULL || (*head_ref)->posCalndario >= new_node->posCalndario){
        new_node->next = *head_ref;
        *head_ref = new_node;
    } else {
        current = *head_ref;
        while (current->next!=NULL && current->next->posCalndario < new_node->posCalndario) {
            current = current->next;
        }
        new_node->next = current->next;
        current->next = new_node;
    }
}

/***********************************************
*
* @Finalidad: Funcion de creacion de un nuevo nodo, se le pasa por parametro un nodo estatico normal y te lo devuelve como un nodo dinamico preparado para ser
*             insertado en una lista.
* @Parametros:  in: gp = Struct donde esta la informacion que cargara el nuevo nodo.
* @Retorno: Devuelve el nuevo nodo creado.
*
************************************************/
struct _node *newNode(GP gp){
    struct _node* new_node = (struct _node*) malloc(sizeof(struct _node));
    new_node->posCalndario  = gp.posCalndario;
    strcpy(new_node->nombreGP,gp.nombreGP);
    new_node->velocidadAdec  = gp.velocidadAdec;
    new_node->aceleracionAdec  = gp.aceleracionAdec;
    new_node->consumoAdec  = gp.consumoAdec;
    new_node->fiabilidadAdec  = gp.fiabilidadAdec;
    new_node->tiempoBase  = gp.tiempoBase;
    new_node->tiempoPinStop  = gp.tiempoPinStop;
    new_node->numeroPinStop  = gp.numeroPinStop;
    new_node->next =  NULL;
    return new_node;
}