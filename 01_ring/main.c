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
    ft_bzero(str + 6, 10);
    bzero(str2 + 3, 6);
    printf("El resultado de mi funcion = %s", str);
	  printf("\nEl resultado del original  = %s \n", str2);
  }
	return (0);
}
