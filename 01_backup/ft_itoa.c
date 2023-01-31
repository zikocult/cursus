/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarulls <gbarulls@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 20:57:37 by gbarulls          #+#    #+#             */
/*   Updated: 2023/01/31 21:47:51 by gbarulls         ###   ########.fr       */
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

static void	ft_converse(char *str, int n)
{
	int	i;

	i = 0;
	if (n == 0)
		str[0] = '0';
	while (n != 0)
	{
		str[i] = (char)(n % 10 + 48);
		n /= 10;
		i++;
	}
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

static void	ft_reverse(char *str, int is_neg, int len)
{
	char	temp;
	int		i;

	if (is_neg == -1)
	{
		ft_isneg(str, len);
		i = 1;
		len++;
	}
	else
		i = 0;
	while (i <= len)
	{
		temp = str[len - 1];
		str[len - 1] = str[i];
		str[i] = temp;
		len--;
		i++;
	}
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
	ft_converse(str, n);
	ft_reverse(str, is_neg, len);
	return (str);
}

// int main (void)
// {
// 	int num = -10004;
// 	char *str;
// 	str = ft_itoa(num);
// 	printf("%s", str);
// 	free (str);
// 	return (0);
// }
