#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	r;

	i = 0;
	r = 1;
	while (str[i])
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			r = 0;
		}
		i++;
	}
	return (r);
}
