#include <stdio.h>
#include "../ft_printf.h"

int main(void)
{
	int d = 21;
	int counter;
	int counter2;

	counter = 0;
	counter2 = 0;
	printf("\n\n--------TEST D = 21 POSITIVE NUMBER ---------"); 
	printf("\n\n--------TEST 1: %%d---------");
	printf("\n");
	printf(" [%d] %n ", d, &counter);	
	printf("\n");
	printf("%d", counter);
	printf("\n");
	ft_printf(" [%d] %n ", d, &counter2);
	printf("\n");
	printf("%d", counter2);
}
