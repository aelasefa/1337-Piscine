int	ft_str_is_printable(char *str)
{
	int	i;
	int	r;

	i = 0;
	r = 1;
	while(str[i])
	{
		if (str[i] < 32 || str[i] > 126)
		{
			r = 0;
		}
		i++;
	}
	return (r);
}
