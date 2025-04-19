/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayelasef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:31:01 by ayelasef          #+#    #+#             */
/*   Updated: 2024/07/14 18:09:16 by ayelasef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	*ptr;
	int	i;

	if (min >= max)
		return (0);
	range = max - min;
	ptr = malloc(sizeof(int) * range);
	if (!ptr)
		return (0);
	i = 0;
	while (i < range)
	{
		ptr[i] = min + i;
		i++;
	}
	return (ptr);
}
