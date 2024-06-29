#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char	hex[16];
	int		i;
	char	a;
	char	b;

	hex = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c'.'d',
		'e', 'f'} i = 0;
	while (str[i])
	{
		if ((str[i] >= 0 && str[i] <= 31) || str[i] == 127)
		{
			a = hex[str[i] / 16];
			b = hex[(str[i] % 16)];
			ft_putchar('\\');
			ft_putchar(a);
			ft_putchar(b);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}
