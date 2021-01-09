#include <stdio.h>
#include "../ft_printf.h"

int main(void)
{
	int d = 21;

	printf("\n\n--------TEST D = 21 POSITIVE NUMBER ---------"); 
	printf("\n\n--------TEST 1: %%d---------");
	printf("\n");
	printf(" [%d] %n ", d);
	printf("\n");
	ft_printf(" [%d] %n ", d);
}
