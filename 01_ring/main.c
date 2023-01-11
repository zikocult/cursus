#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char **argv)
{
	if (argc >= 1)
  {
    int proba;
	  char str[] = "GeeksForGeeks is for programming geeks.";
	  char str2[] = "GeeksForGeeks is for programming geeks.";
	  printf("La frase original = %s\n", str);
    printf("El resultado de mi funcion = %s", ft_memset(str + 4, 'n', 10));
	  printf("\nEl resultado del original  = %s \n", memset(str2 + 10, 'n', 6) );
    printf("Str = %s\nStr2 = %s", str, str2);
  }
	return (0);
}
