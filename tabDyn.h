/*                            tabDyn.h                                */

#ifndef  __TAB_DYN__      // afin d'eviter les doubles declarations
#define  __TAB_DYN__

typedef  int  dynTab ;

/* --- L'init. Il faut créé dynamiquement un tableau de SIZE entiers --- */
dynTab *  construct( ) ;
/* --- Detruire le tableau --- */
void   kill( dynTab * ) ;
/* --- Affichage du tableau --- */
void   show( dynTab * ) ;
/* --- Ajout une valeur. Le tableau peut etre agrandit, donc pt modifie --- */
void   add( dynTab ** , dynTab ) ;
/* --- Rend la position ou on a ajoute une valeur --- */
int    getFinAdd( ) ;
/* --- rend la taille du tableau --- */
int    getSize( ) ;
/* --- rend la valeur à la position du tableau --- */
myType getVal( dynTab *, int ) ;
/* --- rend vrai si on est a la fin du tableau --- */
int    isEnd( ) ;
/* --- rend vrai si on est au debut du tableau --- */
int    isBeg( ) ;

// ###########################################################################

#endif



