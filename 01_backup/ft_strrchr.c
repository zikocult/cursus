/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarulls <gbarulls@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 09:59:49 by gbarulls          #+#    #+#             */
/*   Updated: 2023/01/25 09:59:53 by gbarulls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*ptr;
	int		i;

	ptr = (char *)str;
	i = ft_strlen(ptr);
	while (i >= 0)
	{
		if (ptr[i] == c)
		{
			return (ptr);
		}
		i--;
	}
	return (NULL);
}
