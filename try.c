#include <stdio.h>
#include "tabDyn.h"

int main()
{
        dynTab * tab = construct();

        kill(tab);
        return 0;
}
