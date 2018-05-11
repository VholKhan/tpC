#include <stdio.h>
#include "tabDyn.h"

int main()
{
	int i;
	
	myType * monTab = construct();
	
	
	for(i=0;i<getSize(monTab);i++)
	{
		ajout(&monTab,i);
	}
	
	Affiche(monTab);
	printf("la taille du tableau est : %d\n ",getSize(monTab));
	
	destructeur(monTab);
	return 0;
}

