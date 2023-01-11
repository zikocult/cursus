/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarulls <gbarulls@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 19:58:37 by gbarulls          #+#    #+#             */
/*   Updated: 2023/01/11 20:01:37 by gbarulls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*origin;

	ptr = (unsigned char *)dest;
	origin = (unsigned char *)src;
	while (n > 0 && *origin != '\0')
	{
		*ptr = *origin;
		*origin = '\0';
		ptr++;
		origin++;
		n--;
	}
	return (dest);
}
