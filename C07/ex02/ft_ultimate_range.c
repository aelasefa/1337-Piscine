/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayelasef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 13:00:13 by ayelasef          #+#    #+#             */
/*   Updated: 2024/07/15 23:25:45 by ayelasef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*ptr;
	int	rangee;

	if (min >= max)
		return (0);
	rangee = max - min;
	ptr = malloc(sizeof(int) * rangee);
	if (!ptr)
	{
		*range = 0;
		return (-1);
	}
	i = 0;
	while (i < rangee)
	{
		ptr[i] = min + i;
		i++;
	}
	*range = ptr;
	return (rangee);
}
