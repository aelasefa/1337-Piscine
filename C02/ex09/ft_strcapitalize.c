#include <stdio.h>

char *lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= 'A' && str[i] <= 'Z')
	{
		str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	lowercase(str);
	int	i;
	int	next;

	next = 1;
	i = 0;
	while(str[i])
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			if(next)
			{
				str[i] -= 32;
				next = 0;
			}
		}
		else if(str[i] >= '0' && str[i] <= '9')
		{
			next = 0;
		}
		else
		{
			next = 1;
		}
		i++;
	}
	return (str);
} 
int main()
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n", ft_strcapitalize(str));
}
