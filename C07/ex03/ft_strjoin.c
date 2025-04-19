/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayelasef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 13:29:49 by ayelasef          #+#    #+#             */
/*   Updated: 2024/07/18 11:11:24 by ayelasef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_join(int size, char *result, char **strs, char *sep)
{
	int	i;
	int	j;
	int	s;
	int	r;

	i = 0;
	r = 0;
	while (i < size)
	{
		while (strs[i][j])
			result[r++] = strs[i][j++];
		if (i < size - 1)
		{
			while (sep[s])
				result[r++] = sep[s++];
		}
		i++;
		s = 0;
		j = 0;
	}
	result[r] = '\0';
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		count_len;
	char	*result;
	int		sstrlen;
	int		seplen;

	count_len = 0;
	sstrlen = 0;
	seplen = 0;
	while (count_len < size)
	{
		sstrlen += ft_strlen(strs[count_len]);
		if (count_len < size - 1)
			seplen += ft_strlen(sep);
		count_len++;
	}
	result = malloc(sizeof(char) * (sstrlen + seplen) + 1);
	if (!result)
		return (0);
	return (ft_join(size, result, strs, sep));
}
