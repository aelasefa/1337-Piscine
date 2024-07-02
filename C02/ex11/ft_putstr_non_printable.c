/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayelasef <ayelasef@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 13:19:31 by ayelasef          #+#    #+#             */
/*   Updated: 2024/07/02 11:45:11 by ayelasef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char			*hex;
	int				i;
	char			a;
	char			b;
	unsigned char	c;

	hex = "0123456789abcdef";
	i = 0;
	while (str[i])
	{
		c = str[i];
		if (!(c >= 32 && c <= 126))
		{
			a = hex[c / 16];
			b = hex[c % 16];
			ft_putchar('\\');
			ft_putchar(a);
			ft_putchar(b);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}
