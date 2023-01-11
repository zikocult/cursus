#include "libft.h"
#include <stdlib.h>

void *ft_memset(void *s, int c, size_t n)
{
	unsigned char *ptr;

	ptr = (unsigned char*) s;
	while (n > 0)
	{
		*ptr = (unsigned char)c;
    ptr++;
		n--;
	}
	return (s);
}
