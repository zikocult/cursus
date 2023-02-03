/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarulls <gbarulls@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 23:59:19 by gbarulls          #+#    #+#             */
/*   Updated: 2023/02/03 17:43:16 by gbarulls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
- S'hauran de contar les paraules fins al char c, contant aixi el tamany del primer malloc
- El apuntador, de apuntador es el que donara la seguent dimensio, es a dir, haure de fer el primer malloc sobre el numero de paraules
- 
*/

#include "libft.h"
#include <stdio.h>

static int ft_count_words(char const *s, char c)
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

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		i;
	int		start;

	i = 0;
	start = 0;
	split = (char **)malloc(sizeof(char) * ft_count_words(s, c) + 1);
	if (!split)
		return (NULL);
	while (s[i])
	{
		
	}
	free (split);
	return (split);
}

int main (void){
	char prueba1[100] = "Vamos\ta\tprobar\tque\ttal\tfunciona\testo"; 
	printf("%s\n", prueba1);
	printf("%i\n", ft_count_words(prueba1, '\t'));
	
	return (0);
}
