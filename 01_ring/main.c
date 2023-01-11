#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char **argv)
{
	int proba;
	proba = strlen(argv[1]);
	printf("El resultado de mi funcion es %s", ft_memset(argv[1], 'n', 4));
	printf("\nEl resultado del original es %d \n", proba);
	return (0);
}
