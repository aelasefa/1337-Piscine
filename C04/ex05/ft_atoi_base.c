/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayelasef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 14:32:42 by ayelasef          #+#    #+#             */
/*   Updated: 2024/07/06 19:06:17 by ayelasef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	invalid(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || ft_strlen(base) <= 1)
		{
			return (0);
		}
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_base(char *str, char *base, int signe, int i)
{
	int	result;
	int	index;
	int	j;

	result = 0;
	while (str[i])
	{
		index = -1;
		j = 0;
		while (base[j])
		{
			if (str[i] == base[j])
			{
				index = j;
				break ;
			}
			j++;
		}
		if (index == -1)
			break ;
		result = result * ft_strlen(base) + index;
		i++;
	}
	return (result * signe);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	signe;

	signe = 1;
	if (invalid(base) == 0)
		return (0);
	i = 0;
	while (str[i] <= 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signe *= -1;
		i++;
	}
	return (ft_base(str, base, signe, i));
}
