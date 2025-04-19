/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayelasef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 20:53:32 by ayelasef          #+#    #+#             */
/*   Updated: 2024/07/03 20:07:12 by ayelasef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	j = 0;
	if (to_find[j] == '\0')
	{
		return (str);
	}
	while (*str)
	{
		i = 0;
		j = 0;
		while (str[i] != '\0' && str[i] == to_find[j])
		{
			i++;
			j++;
			if (to_find[j] == '\0')
			{
				return (str);
			}
		}
		str++;
	}
	return (0);
}
