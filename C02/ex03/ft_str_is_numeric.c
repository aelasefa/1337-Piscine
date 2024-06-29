int	ft_str_is_numeric(char *str)
{
	int	i;
	int	r;

	i = 0;
	r = 1;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
		{
			r = 0;
		}
		i++;
	}
	return (r);
}
