/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayelasef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 16:11:48 by ayelasef          #+#    #+#             */
/*   Updated: 2024/07/07 17:27:13 by ayelasef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

int	main(int ac, char *av[])
{
	int	last;

	last = ac - 1;
	if (ac != 0)
	{
		while (last > 0)
		{
			ft_putstr(av[last]);
			ft_putchar('\n');
			last--;
		}
	}
}
