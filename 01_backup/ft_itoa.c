/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarulls <gbarulls@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 20:57:37 by gbarulls          #+#    #+#             */
/*   Updated: 2023/02/02 20:32:40 by gbarulls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static void	ft_isneg(char *str, int len)
{
	while (len >= 1)
	{
		str[len] = str[len - 1];
		len--;
	}
	str[0] = '-';
}

static void	ft_converse(char *str, int n, int len, int is_neg)
{
	if (n == 0)
		str[0] = '0';
	if (is_neg == -1)
	{
		ft_isneg(str, len);
		len++;
	}
	while (n != 0)
	{
		str[len - 1] = (char)(n % 10 + 48);
		n /= 10;
		len--;
	}
}

char	*ft_int_min(char *str, int n, int len)
{
	*(str + 0) = '-';
	*(str + 1) = '2';
	n = 147483648;
	while (n != 1)
	{
		str[len - 1] = (char)(n % 10 + 48);
		n /= 10;
		len--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		is_neg;

	len = ft_intlen (n);
	if (n < 0)
	{
		is_neg = -1;
		n *= is_neg;
		str = (char *)ft_calloc(sizeof(char), len + 2);
	}
	else if (n >= 0)
	{
		is_neg = 1;
		str = (char *)ft_calloc(sizeof(char), len + 1);
	}
	if (!str)
		return (NULL);
	if (n == -2147483648)
		return (ft_int_min(str, n, len));
	ft_converse(str, n, len, is_neg);
	return (str);
}

// int main (void)
// {
// 	int num = 2147483647;
// 	char *str;
// 	str = ft_itoa(num);
// 	printf("%s", str);
// 	free (str);
// 	return (0);
// }
