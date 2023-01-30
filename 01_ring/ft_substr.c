/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarulls <gbarulls@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 19:05:42 by gbarulls          #+#    #+#             */
/*   Updated: 2023/01/30 19:05:44 by gbarulls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;
	unsigned int	j;

	if (!s)
		return (NULL);
	if (len < (unsigned int)(ft_strlen(s)))
		str = malloc(sizeof(char) * (len + 1));
	else
		str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	i = start;
	j = 0;
	if (start < (unsigned int)(ft_strlen(s)))
	{
		while (i < start + len && s[i] != '\0')
		{
			str[j] = s[i];
			j++;
			i++;
		}
	}
	str[j] = '\0';
	return (str);
}
