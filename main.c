#include <stdio.h>
#include "ft_printf.h"

int main(int argc, char **argv)
{
	int res;

	res = ft_printf("%f", 0. / 0.);
	ft_printf("\n%d\n", res);
}
