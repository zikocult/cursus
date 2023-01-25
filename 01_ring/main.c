#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
char	*ft_strchr(const char *str, int c);

int main(void)
{
    // int proba;
	// char str[100] = "abcdefghijkl cagontoloquesemenea ";
	// char str2[100] = "mnopqrstuvwxyz.";
	// char str3[100] = "abcdefghijkl cagontoloquesemenea";
	// char str4[100] = "mnopqrstuvwxyz. ";
	printf("Mi funcion   = %s\n", ft_strrchr("teste", '\n'));
	printf("Funcion original = %s\n", strrchr("teste", '\n'));
	//  ft_bzero(str + 6, 10);
	//  bzero(str2 + 3, 6);
	//  printf("El resultado de mi funcion = %s", str);
	// printf("\nstr  =  %s \nstr2 = %s\n", str, str2);
	// printf("\nstr3 =  %s \nstr4 = %s\n", str3, str4);
	return (0);
}
