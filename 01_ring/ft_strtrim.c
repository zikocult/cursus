/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarulls <gbarulls@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 20:53:38 by gbarulls          #+#    #+#             */
/*   Updated: 2023/01/30 20:53:39 by gbarulls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		i;
	size_t	j;
	size_t	k;
	char	*str;

	str = (char *)malloc(sizeof(char) * (ft_strlen(s1)) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (i < ft_strlen(set))
	{
		j = 0;
		while (str[j])
		{
			if (str[j] == set[i])
			{
				k = j;
				while (str[k])
				{
					str[k] = str[k + 1];
					k++;
				}
				str[k] = '\0';
			}
			j++;
		}
		i++;
	}
	return (str);
}

int main(void)
{
	char *str;
	// char *str2;
	// char *str3;

	char frase1[100] = "Hola Mundo ";
	char frase2[100] = "";
	char frase3[100] = "Habia una vez un barco en Maracaná de la Selva";


	str = ft_strtrim(frase1, "oa");
	printf("%s\n", str);
	free (str);

	str = ft_strtrim(frase2, "oa");
	printf("%s\n", str);
	free(str);

	str = ft_strtrim(frase3, "oa");
	printf("%s\n", str);
	free(str);

	return (0);
}
