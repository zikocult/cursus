/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarulls <gbarulls@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 21:03:58 by gbarulls          #+#    #+#             */
/*   Updated: 2023/02/01 23:58:24 by gbarulls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// Para las pruebas hay que incluir #include <fcntl.h>
// int main (void)
// {
// 	int fd;
//
// 	fd = open("/Users/gbarulls/tests/cursus/01_ring/prueba.txt", O_WRONLY);
// 	if (fd == -1)
// 		printf("Error al abrir el archivo\n");
// 	ft_putchar_fd('a', fd);
// 	close(fd);
// 	return (0);
// }
