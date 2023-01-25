/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarulls <gbarulls@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 12:33:58 by gbarulls          #+#    #+#             */
/*   Updated: 2023/01/25 12:34:02 by gbarulls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	char	*ptr_str;

	ptr_str = (char *)str;
	while (*ptr_str != '\0' && n > 0)
	{
		if (*ptr_str == c)
		{
			return (ptr_str);
		}
		ptr_str++;
		n--;
	}
	return (NULL);
}
