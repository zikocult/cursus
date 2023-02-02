/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarulls <gbarulls@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 23:42:58 by gbarulls          #+#    #+#             */
/*   Updated: 2023/02/01 23:54:50 by gbarulls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putchar(s[i], fd);
		i++;
	}
}

// Para las pruebas hay que incluir #include <fcntl.h>
// int main (void)
// {
// 	int fd;
// 	char *a = "\nHola\nMundo!\n";
//
// 	fd = open("./prueba.txt", O_WRONLY);
// 	if (fd == -1)
// 		printf("Error al abrir el archivo\n");
// 	ft_putstr_fd(a, fd);
// 	close(fd);
// 	return (0);
// }
