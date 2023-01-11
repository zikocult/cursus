/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarulls <gbarulls@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:12:31 by gbarulls          #+#    #+#             */
/*   Updated: 2023/01/10 18:34:13 by gbarulls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/_types/_size_t.h>
int	ft_isalpha(char *str)
{
	if ((*str >= 'A' && *str <= 'Z' )
		|| (*str >= 'a' && *str <= 'z' ))
		return (1);
	return (0);
}

int	ft_isdigit(char *str)
{
	if (*str >= '0' && *str <= '9')
		return (1);
	return (0);
}

int	ft_isalnum(char *str)
{
	if (ft_isalpha(str) == 1 || ft_isdigit(str) == 1)
		return (1);
	return (0);
}

int	ft_isascii(char *str)
{
	if (*str >= 0 && *str <= 127)
		return (1);
	return (0);
}

int	ft_isprint(char *str)
{
	if (*str >= 32 && *str < 127)
		return (1);
	return (0);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		str++;
		count++;
	}
	return (count);
}

void *ft_memset (char *str, int c, int n)
{
	int	count;

	count = 0;
	while (*str != '\0' || count < n)
	{
		*str = c;
		str++;
		count++;
	}
	return (str);
}
