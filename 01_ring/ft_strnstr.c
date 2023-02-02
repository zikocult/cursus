/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarulls <gbarulls@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 13:09:30 by gbarulls          #+#    #+#             */
/*   Updated: 2023/02/02 22:29:52 by gbarulls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;

	if (!s2[0])
		return ((char *)s1);
	i = 0;
	while (s1[i] && i < len)
	{
		j = 0;
		while (s1[i + j] && s2[j]
			&& i + j < len && s1[i + j] == s2[j])
			j++;
		if (!s2[j])
			return ((char *)(s1 + i));
		i++;
	}
	return (NULL);
}

// if (!s1)
// 	return (NULL);
// if (!s2 || !s2[0])
// 	return ((char *)s1);
// int main (void){
// 	char proba1[] = "Hola Mundo";
// 	char proba2[] = "ux";
// 	printf("Strnstr = %s\n", ft_strnstr(proba1, proba2, 100));
// 	return(0);
// }

// if (!s1)
// 	return (NULL);
// if (!s2 || !s2[0])
// 	return ((char *)s1);
