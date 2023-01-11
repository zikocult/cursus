/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarulls <gbarulls@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:12:31 by gbarulls          #+#    #+#             */
/*   Updated: 2023/01/11 12:24:23 by gbarulls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_strlen(const char *str);

void *ft_memset (void *s, int c, size_t n)
{
	unsigned char *ptr;

	ptr = (unsigned char*)s;
	while (n > 0)
	{
		*ptr = (unsigned char)c;
    ptr++;
		n--;
	}
	return (s);
}
