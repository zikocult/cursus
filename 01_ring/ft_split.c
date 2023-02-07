/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarulls <gbarulls@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 23:59:19 by gbarulls          #+#    #+#             */
/*   Updated: 2023/02/07 18:59:09 by gbarulls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(const char *str, char c)
{
	int	i;
	int	trigger;

	i = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (i);
}

static char	**error_mal(char **split, int count)
{
	while (count-- > 0)
		free(split[count]);
	free(split);
	return (NULL);
}

static char	*word_dup(const char *str, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((end - start + 1) * sizeof(char));
	while (start < end)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

static char	**ft_strvalida(const char *s, char c, char **split)
{
	int	end;
	int	j;
	int	start;

	j = 0;
	end = 0;
	start = -1;
	while (end <= ft_strlen(s))
	{
		if (s[end] != c && start < 0)
			start = end;
		else if ((s[end] == c || end == ft_strlen(s)) && start >= 0)
		{
			split[j] = word_dup(s, start, end);
			if (split[j] == NULL)
				return (error_mal(split, j));
			j++;
			start = -1;
		}
		end++;
	}
	split[j] = 0;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	split = malloc((count_word(s, c) + 1) * sizeof(char *));
	if (!s || !split)
		return (NULL);
	split = ft_strvalida (s, c, split);
	return (split);
}

// int main(void)
// {
// 	char **splitted;
// 	char prueba1[100] = "AbraCadabra pata de cabra";
// 	char prueba2[100] = " ";
// 	char prueba3[100] = "hello!";
// 	splitted = ft_split(prueba1, 'a');
// 	for (int i = 0; splitted[i] != NULL; i++)
// 		printf("%s\n", splitted[i]);
// 	for (int i = 0; splitted[i] != NULL; i++)
// 		free(splitted[i]);
// 	printf("**********************************\n");
// 	splitted = ft_split(prueba2, 'a');
// 	for (int i = 0; splitted[i] != NULL; i++)
// 		printf("%s\n", splitted[i]);
// 	for (int i = 0; splitted[i] != NULL; i++)
// 		free(splitted[i]);
// 	printf("**********************************\n");
// 	splitted = ft_split(prueba3, ' ');
// 	for (int i = 0; splitted[i] != NULL; i++)
// 		printf("%s\n", splitted[i]);
// 	for (int i = 0; splitted[i] != NULL; i++)
// 		free(splitted[i]);
// 	return (0);
// }
