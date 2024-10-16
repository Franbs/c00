#include <unistd.h>

void	ft_print_comb2(void)
{
	char num1 = '0';
	char num2;
	char num3;
	char num4;

	while (num1 <= '9')
	{
		num2 = '0';
		while (num2 <= '9')
		{
			num3 = num1;
			num4 = num2 + 1;
			while (num3 <= '9')
			{
				while (num4 <= '9')
				{
					write(1, &num1, 1);
					write(1, &num2, 1);
					write(1, " ", 1);
					write(1, &num3, 1);
					write(1, &num4, 1);
					if (num1 != '9' || num2 != '8' || 
							num3 != '9' || num4 != '9')
						write(1, ", ", 2);

					num4++;
				}
				num3++;
				num4 = '0';
			}
			num2++;
		}
		num1++;
	}
	write(1, "\n", 1);
}

/*int main(void)
{
	ft_print_comb2();
	write(1, " ", 1);
	return 0;
}*/
