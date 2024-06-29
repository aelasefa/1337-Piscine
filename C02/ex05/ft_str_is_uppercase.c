
int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	r;

	i = 0;
	r = 1;
	while(str[i])
	{
		if(str[i] < 'A' || str[i] > 'Z')
		{
			r = 0;
		}
		i++;
	}
	return (r);
}
