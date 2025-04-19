/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayelasef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 10:00:00 by ayelasef          #+#    #+#             */
/*   Updated: 2024/07/18 10:22:12 by ayelasef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	invalid(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if ((base[j] == base[i]) || (base[i] == '-') || (base[i] == '+')
				|| (base[j] == '-') || (base[j] == '+'))
			{
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_base(char *str, char *base, int sign, int i)
{
	long	index;
	int		j;
	int		r;

	r = 0;
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
		r = r * ft_strlen(base) + index;
		i++;
	}
	return (r * sign);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	j;

	i = 0;
	sign = 1;
	j = 0;
	if ((invalid(base)) || (ft_strlen(base) <= 1))
		return (-1);
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	while ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	return (ft_base(str, base, sign, i));
}
