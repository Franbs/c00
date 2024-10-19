/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbanzo-s <fbanzo-s@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 19:39:25 by fbanzo-s          #+#    #+#             */
/*   Updated: 2024/10/19 19:39:28 by fbanzo-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	length(int num)
{
	int	contador;

	contador = 0;
	while (num != 0)
	{
		contador++;
		num /= 10;
	}
	return (contador);
}

void	ft_putnbr(int nb)
{
	char	strnb;
	char	numl[12];
	int		i;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	i = 0;
	while (nb != 0)
	{
		strnb = (nb % 10) + '0';
		nb /= 10;
		numl[i] = strnb;
		i++;
	}
	numl[i] = '\0';
	i = i - 1;
	while (i >= 0)
	{
		write(1, &numl[i], 1);
		i--;
	}
	write(1, "\n", 1);
}
/*int main(void)
{
	ft_putnbr(42);
	return 0;
}*/
