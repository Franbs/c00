/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbanzo-s <fbanzo-s@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 19:41:44 by fbanzo-s          #+#    #+#             */
/*   Updated: 2024/10/19 20:02:22 by fbanzo-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n)
{
	char	nums[];
	char	cnum = n + '0';
	char	i = '0';

	while (i < n)
	{
		write();
		i++;
	}
}

int	main(void)
{
	ft_print_combn(2);
	return 0;
}
