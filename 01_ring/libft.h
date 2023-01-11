/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbarulls <gbarulls@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:12:31 by gbarulls          #+#    #+#             */
/*   Updated: 2023/01/11 09:37:21 by gbarulls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_strlen(char *str);

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
