/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbanzo-s <fbanzo-s@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 19:38:36 by fbanzo-s          #+#    #+#             */
/*   Updated: 2024/10/19 19:51:29 by fbanzo-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	char	nums[5];
	int		i;
	int		j;

	i = 0;
	while (i < 100)
	{
		j = i + 1;
		while (j < 100)
		{
			nums[0] = (i / 10) + '0';
			nums[1] = (i % 10) + '0';
			nums[2] = ' ';
			nums[3] = (j / 10) + '0';
			nums[4] = (j % 10) + '0';
			write(1, nums, 5);
			if (!(i == 98 && j == 99))
			{
				write(1, ", ", 2);
			}
			j++;
		}
		i++;
	}
	write(1, "\n", 1);
}
/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
