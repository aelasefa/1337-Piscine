void rush(int x, int y)
{
	if(x <= 0 || y <= 0)
	{
		return;
	}
	int i, j;
	i = 0;
	while(i < y)
	{
		j = 0;
		while(j < x)
		{
			if(i == 0 || i == y - 1)
			{
				if(j == 0 || j == x - 1)
				{
					ft_putchar('o');
				}
				else
				{
					ft_putchar('-');
					
				}
			}
			else 
			{
				if(j == 0 || j == x -  1)
				{
					
					ft_putchar('|');
				}
				else
				{
					ft_putchar(' ');
				}
			}
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
