/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayelasef <ayelasef@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 12:09:53 by ayelasef          #+#    #+#             */
/*   Updated: 2024/06/26 12:09:57 by ayelasef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a;
		while (b <= 99)
		{
			if (a != b)
			{
				ft_putchar((a / 10) + '0');
				ft_putchar((a % 10) + '0');
				ft_putchar(' ');
				ft_putchar((b / 10) + '0');
				ft_putchar((b % 10) + '0');
				if (a != 98)
				{
					write(1, ", ", 2);
				}
			}
			b++;
		}
		a++;
	}
}
