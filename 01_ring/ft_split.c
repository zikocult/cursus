/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarulls <gbarulls@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 23:59:19 by gbarulls          #+#    #+#             */
/*   Updated: 2023/02/07 17:57:11 by gbarulls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(const char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == c)
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

static char	*dup_word(int start, int end, const char *str)
{
	char	*splitted;
	int		i;

	i = 0;
	splitted = (char *)malloc(sizeof(char) * (end - start + 2));
	if (!splitted)
		return (NULL);
	while (start <= end)
		splitted[i++] = str[start++];
	splitted[i] = '\0';
	return (splitted);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		start;
	int		count;
	char	**split;

	split = (char **)malloc((sizeof(char *) * (count_word(s, c) + 1)));
	if (!split)
		return (NULL);
	i = 0;
	start = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c || i + 1 == ft_strlen(s))
		{
			split[count] = dup_word(start, i, s);
			if (split[count] == NULL)
				return (error_mal(split, count));
			count++;
			start = i + 1;
		}
		i++;
	}
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
// 	splitted = ft_split(prueba3, '\0');
// 	for (int i = 0; splitted[i] != NULL; i++)
// 		printf("%s\n", splitted[i]);
// 	for (int i = 0; splitted[i] != NULL; i++)
// 		free(splitted[i]);
// 	return (0);
// }
