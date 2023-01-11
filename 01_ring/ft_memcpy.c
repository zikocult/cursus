/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarulls <gbarulls@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 19:52:05 by gbarulls          #+#    #+#             */
/*   Updated: 2023/01/11 19:53:57 by gbarulls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*origin;

	ptr = (unsigned char *)dest;
	origin = (unsigned char *)src;
	while (n > 0 && *origin != '\0')
	{
		*ptr = *origin;
		ptr++;
		origin++;
		n--;
	}
	return (dest);
}
