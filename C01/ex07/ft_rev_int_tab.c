/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayelasef <ayelasef@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 08:47:30 by ayelasef          #+#    #+#             */
/*   Updated: 2024/07/01 16:27:02 by ayelasef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	swp;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			swp = tab[i];
			tab[i] = tab[j];
			tab[j] = swp;
			j++;
		}
		i++;
	}
}

int main()
{
  int size = 5;
  int tab[] = {6, 5, 4, 2 ,1};
  ft_rev_int_tab(tab, size);
  int i;
  for(i = 0; i < size;i++)
  {
    printf("%d", tab[i]);
  }
  printf("\n");
}
