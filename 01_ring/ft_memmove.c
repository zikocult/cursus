/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarulls <gbarulls@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 19:58:37 by gbarulls          #+#    #+#             */
/*   Updated: 2023/01/16 23:38:31 by gbarulls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*destiny;
	char	*source;
	size_t	i;

	destiny = (char *)dest;
	source = (char *)src;
	i = 0;
	if (destiny > source)
	{
		while (n > 0)
		{
			destiny[n] = source[n];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			destiny[i] = source[i];
			i++;
		}
	}
	return (dest);
}
