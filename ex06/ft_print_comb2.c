#include <unistd.h>

void	ft_print_comb2(void)
{
	char	a[5];
	int		i;
	int		j;

	i = 0;
	while (i < 100)
	{
		j = i + 1;
		while (j < 100)
		{
			a[0] = (i / 10) + '0';
			a[1] = (i % 10) + '0';
			a[2] = ' ';
			a[3] = (j / 10) + '0';
			a[4] = (j % 10) + '0';
			write(1, a, 5);
			if (!(i == 98 && j == 99))
			{
				write(1, ", ", 2);
			}
			j++;
		}
		i++;
	}
}
/*int main(void)
{
	ft_print_comb2();
	write(1, " ", 1);
	return 0;
}*/