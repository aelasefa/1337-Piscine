/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayelasef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 11:35:27 by ayelasef          #+#    #+#             */
/*   Updated: 2024/07/08 12:13:38 by ayelasef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	r;
	int	i;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = 1;
	r = nb;
	while (i < power)
	{
		r *= nb;
		i++;
	}
	return (r);
}
