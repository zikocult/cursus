/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarulls <gbarulls@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 19:08:52 by gbarulls          #+#    #+#             */
/*   Updated: 2023/01/31 19:40:13 by gbarulls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_char_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	start;
	size_t	end;

	start = 0;
	while (s1[start] && ft_char_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_char_set(s1[end - 1], set))
		end--;
	str = (char *)ft_calloc(sizeof(*s1), (end - start + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (start < end)
		str[i++] = s1[start++];
	str[i] = 0;
	return (str);
}

// int main(void)
// {
// 	char *str;
// 	// char *str2;
// 	// char *str3;
// 	char frase1[100] = "    Hola Mundo abcdefiou";
// 	char frase2[100] = "Vamos a ver\t";
// 	char frase3[100] = "kakkkkHabia una vez un barco en la Selvakkka";
// 	str = ft_strtrim(frase1, " ");
// 	printf("%s\n", str);
// 	free (str);
// 	str = ft_strtrim(frase2, "\t");
// 	printf("%s\n", str);
// 	free(str);
// 	str = ft_strtrim(frase3, "kaH");
// 	printf("%s\n", str);
// 	free(str);
// 	return (0);
// }
