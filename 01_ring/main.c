#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n);

int main(int argc, char **argv)
{
	if (argc >= 1)
  {
    int proba;
	char str[100] = "GeeksForGeeks is ";
	char str2[100] = "for programming geeks.";
	char str3[100] = "GeeksForGeeks is ";
	char str4[100] = "for programming geeks.";
	printf("Mi funcion   = %s\n", ft_memmove(str, str2, 12));
	printf("Funcion real = %s\n", memmove(str3, str4, 12));
//  ft_bzero(str + 6, 10);
//  bzero(str2 + 3, 6);
//  printf("El resultado de mi funcion = %s", str);
	printf("\nstr  =  %s \nstr2 = %s\n", str, str2);
	printf("\nstr3 =  %s \nstr4 = %s\n", str3, str4);
  }
	return (0);
}
