/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarulls <gbarulls@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 17:36:54 by gbarulls          #+#    #+#             */
/*   Updated: 2023/01/30 17:36:57 by gbarulls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	i;

	if (!s)
		return (NULL);
	str = (char *)malloc(sizeof(*s) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = 0;
	return (str);
}

	// Idea descartada, pues no pone el último valor a 0
	// ft_memcpy(ptr, s, count);
//
	// int main(void)
	// {
	// 	char *str;
	// 	char *str2;
	// 	char *str3;

	// 	char frase [100]= "abcdefghijkl cagontoloquesemenea ";
	// 	char frase2 [100]= "mnopqrstuvwxyz.";
	// 	char frase3 [100] = "";

	// 	str = ft_strdup(frase);
	// 	printf("El mio = %s\n", str);
	// 	str = strdup(frase);
	// 	printf("Original = %s\n", str);
	// 	free(str);

	// 	str2 = ft_strdup(frase2);
	// 	printf("El mio = %s\n", str2);
	// 	str2 = strdup(frase2);
	// 	printf("Original = %s\n", str2);
	// 	free(str2);

	// 	str3 = ft_strdup(frase3);
	// 	printf("El mio = %s\n", str3);
	// 	str3 = strdup(frase3);
	// 	printf("Original = %s\n", str3);
	// 	free(str3);
	// }