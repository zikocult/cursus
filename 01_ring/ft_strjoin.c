/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarulls <gbarulls@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 20:06:52 by gbarulls          #+#    #+#             */
/*   Updated: 2023/01/30 20:06:54 by gbarulls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = 0;
	str = (char *)malloc(sizeof(char) * ((ft_strlen(s1))
				+ (ft_strlen(s2)) + 1));
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}

// int main(void)
// {
// 	char *str;
// 	// char *str2;
// 	// char *str3;

// 	char frase1 [100]= "Hola ";
// 	char frase2 [100]= "Mundo!";
// 	char frase3 [100] = "";

// 	str = ft_strjoin(frase1, frase2);
// 	printf("%s\n", str);
// 	free (str);

// 	str = ft_strjoin(frase1, frase3);
// 	printf("%s\n", str);
// 	free (str);

// 	str = ft_strjoin(frase2, frase2);
// 	printf("%s\n", str);
// 	free (str);

// 	str = ft_strjoin(frase3, frase2);
// 	printf("%s\n", str);
// 	free(str);

// 	str = ft_strjoin(frase3, frase1);
// 	printf("%s\n", str);
// 	free(str);

// 	str = ft_strjoin(frase3, frase3);
// 	printf("%s\n", str);
// 	free(str);

// 	return (0);
// }
