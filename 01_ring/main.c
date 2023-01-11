#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char **argv)
{
	if (argc >= 1)
  {
    int proba;
	  proba = strlen(argv[1]);
	  printf("El resultado de mi funcion es %d", ft_strlen(argv[1]));
	  printf("\nEl resultado del original es %d \n", proba);
  }
	return (0);
}
