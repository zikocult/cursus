/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarulls <gbarulls@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 19:05:42 by gbarulls          #+#    #+#             */
/*   Updated: 2023/02/02 23:02:08 by gbarulls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_copy(char *dst, const char *src, size_t dstsize)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	if (dstsize == 0)
		return (count);
	while (src[count] != '\0')
		count++;
	if (dstsize != 0)
	{
		while (i < (dstsize - 1) && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (count);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	n_len;

	if (s == NULL)
		return (NULL);
	if ((unsigned int)ft_strlen(s) < start)
		return (ft_strdup(""));
	n_len = ft_strlen(s + start);
	if (n_len < len)
		len = n_len;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	ft_copy(str, s + start, len + 1);
	return (str);
}

// int main(){
// 	printf("%s", ft_substr("hola", 4294967295, 0));
// }
