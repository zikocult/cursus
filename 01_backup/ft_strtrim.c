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

static char	*ft_init(char *str, char const *s1)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	return (str);
}

static char	*ft_erase(char *str, char const *set, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	while (i < (size_t)ft_strlen(set) && str[i])
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
			}
			j++;
		}
		i++;
	}
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (ft_strlen(s1)) + 1);
	if (!str)
		return (NULL);
	ft_init(str, s1);
	ft_erase(str, set, ft_strlen(str));
	return (str);
}

int main(void)
{
	char *str;
	// char *str2;
	// char *str3;
	char frase1[100] = "Hola Mundo abcdefiou";
	char frase2[100] = "";
	char frase3[100] = "Habia una vez un barco en Maracana de la Selva";
	str = ft_strtrim(frase1, "aeiou");
	printf("%s\n", str);
	free (str);
	str = ft_strtrim(frase2, "aeiou");
	printf("%s\n", str);
	free(str);
	str = ft_strtrim(frase3, "");
	printf("%s\n", str);
	free(str);
	return (0);
}
