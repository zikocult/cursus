/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarulls <gbarulls@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 13:09:30 by gbarulls          #+#    #+#             */
/*   Updated: 2023/01/25 13:09:33 by gbarulls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_valida(char *s1, char *s2)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = 0;
	while (s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			tmp = 1;
		i++;
	}
	if (tmp == 0)
		return (1);
	else
		return (0);
}

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	char	*ptr_str;
	char	*ptr_str2;

	ptr_str = (char *)s1;
	ptr_str2 = (char *)s2;
	if (ptr_str2[0] == '\0')
		return (ptr_str);
	while (*ptr_str != '\0' && len > 0)
	{
		if (*ptr_str == *ptr_str2)
		{
			if (ft_valida (ptr_str, ptr_str2) == 1)
				return (ptr_str);
		}
		ptr_str++;
		len--;
	}
	return (NULL);
}

// int main (void){
// 	char proba1[] = "Hola Mundo";
// 	char proba2[] = "";
// 	printf("Strnstr = %s\n", ft_strnstr(proba1, proba2, 4));
// 	return(0);
// }
