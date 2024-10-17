#include <unistd.h>

int 	length(int num)
{
	int contador;

	contador = 0;
	while(num != 0){
		contador++;
		num /= 10;
	}

	return contador;
}

void	ft_putnbr(int nb)
{
	char	strnb;
	
	while(nb % 10 != 0)
	{
		int	res;

		res = nb % 10;
		strnb = res + '0';
		write(1, &strnb, 1);
		nb /= 10;
	}

	write(1, "\n", 1);
}

int main(void)
{
	length(42);
	ft_putnbr(42);
	return 0;
}
