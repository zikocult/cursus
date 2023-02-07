/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarulls <gbarulls@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 23:59:19 by gbarulls          #+#    #+#             */
/*   Updated: 2023/02/07 11:12:10 by gbarulls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count);
}

static char	**error_mal(char **split, int count)
{
	while (count-- > 0)
		free(split[count]);
	free(split);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		start;
	int		count;
	char	**split;

	split = (char **)malloc((sizeof(char *) * (count_word(s, c) + 2)));
	if (!split)
		return (NULL);
	i = 0;
	start = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			split[count] = (char *)malloc(sizeof(char) * (i - start + 1));
			if (!split[count])
				return (error_mal(split, count));
			while (start < i)
				split[count] = (char *)(s + start++);
			count++;
			start = i + 1;
		}
		i++;
	}
	return (split);
}

			// split[count][i - start] = '\0';
			// queda pendiente colocar esto para la última
// int main (void){
// 	char **splitted;
// 	char prueba1[100] = "Hola Mundo!";
// 	int i = 0;
// 	splitted = ft_split(prueba1, 'o');
// 	while (*splitted[i] != '\0')
// 	{
// 		printf("%s", splitted[i]);
// 		i++;
// 	}
// 	// while (i-- > 0)
// 	// 	free(splitted[i]);
// 	// free(splitted);
// 	return (0);
// }
