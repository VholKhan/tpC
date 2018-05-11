#include <stdio.h>
#include <stdlib.h>
#include "tabDyn.h"
#define SIZE 10
int size, top;

myType *  construct() /*1ere etape : creation du tableau (reservation de la memoire)*/ 
{	
	myType* tab;
	tab = malloc (SIZE * sizeof(myType));
	size=SIZE;
	top=0;

	if( tab == NULL )
	{
		fprintf(stderr,"Allocation impossible");
		exit(EXIT_FAILURE);
	}
	return tab;
}

void Affiche(myType * tab)
{	
	myType i;
	for(i=0; tab[i]<top;i++)
	{
		printf("%d\n", tab[i]);
	}
}

int getFinAdd(){
	
}

int getVal (myType *, int){
	
}

int getSize(myType* t) { return size; }

int isEnd(){	
/*
 	if(size=top)
		return 1;
	else
		return 0;
*/
   return (size==top) ? 1 : 0 ;
}

int isBeg()
{
	if(top=0)
		return 1;
	else
		return 0;
}

void   ajout(myType **tab, myType v)
{
	(*tab)[top++]=v; /*Incrémente le top en cas de remplissage du tableau*/
}

void destructeur(myType * tab)
{
	free(tab);
}
