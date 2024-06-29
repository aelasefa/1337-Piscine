#include <stdio.h>

unsigned int	ft_strlen(char* str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned	int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	while(src[i] != '\0' && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	while(i < size)
	{
		dest[i] = '\0';
		i++;
	}
	return (ft_strlen(dest));
}
