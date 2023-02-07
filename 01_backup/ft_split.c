/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarulls <gbarulls@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 23:59:19 by gbarulls          #+#    #+#             */
/*   Updated: 2023/02/06 23:54:13 by gbarulls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**error_malloc(char **split)
{
	size_t	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (NULL);
}

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
			count++;
		i++;
	}
	return (count);
}

static char	*dup_split(int start, int end, const char *str)
{
	char	*str_temp;
	int		i;

	i = 0;
	while (start < end)
		str_temp[i++] = str[start++];
	return (str_temp);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		i;
	int		j;
	int		start;

	i = 0;
	j = 0;
	start = -1;
	split = (char **)malloc(sizeof(char) * ft_count_words(s, c) + 1);
	if (!split)
		return (NULL);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && start < 0)
			start = i;
		else if ((s[i] == c || i == ft_strlen(s)) && start >= 0)
		{
			split[j] = (char *)malloc(sizeof(char) * (i - start) + 1);
			if (!split)
				return(error_malloc(split));
			split[j++] = dup_split(start, i, s);
			start = -1;
		}
		i++;
	}
	return (split);
}

int main (void){
	char **splitted;
	char prueba1[100] = "Hola Mundo!";
	int i = 0;
	splitted = ft_split(prueba1, 'o');
	while (*splitted[i] != '\0')
	{
		printf("%s", splitted[i]);
		i++;
	}
	error_malloc(splitted);
	return (0);
}
