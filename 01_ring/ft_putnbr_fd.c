/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarulls <gbarulls@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 00:10:42 by gbarulls          #+#    #+#             */
/*   Updated: 2023/02/07 19:13:13 by gbarulls         ###   ########.fr       */
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

static int	ft_power(int power)
{
	int	result;

	result = 1;
	while (power > 1)
	{
		result *= 10;
		power--;
	}
	if (power == 0)
		return (1);
	return (result);
}

void	ft_putnbr_fd(int n, int fd)
{
	int	len;
	int	poten;

	if (n == -2147483648)
	{
		n = 147483648;
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
	}
	if (n < 0)
	{
		n *= -1;
		ft_putchar_fd('-', fd);
	}
	len = ft_intlen(n);
	poten = ft_power(len);
	while (poten > 0)
	{
		ft_putchar_fd((n / poten) + 48, fd);
		n %= poten;
		poten /= 10;
	}
}

// Para las pruebas hay que incluir #include <fcntl.h>
// int main (void)
// {
// 	int fd;
// 	int a = -2345698;

// 	fd = open("./prueba.txt", O_WRONLY);
// 	if (fd == -1)
// 		printf("Error al abrir el archivo\n");
// 	ft_putnbr_fd(a, fd);
// 	close(fd);
// 	return (0);
// }
