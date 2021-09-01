/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 09:34:32 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/08/08 09:34:33 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print_combn(int n)
{
	int		i;
	char	numbers[10];

	i = 0;
	if (!(n < 1))
	{
		if (!(n > 10))
		{
			while (i != n)
			{
				printf("%d", i);
				numbers[i] = 0;
				i++;
			}
		}
	}
}
/*
x[0] = '0';
while (x[0] <= '7')
{
	x[1] = x[0] + 1;
	while (x[1] <= '8')
	{
		x[2] = x[1] + 1;
		while (x[2] <= '9')
		{
			write(1, &x[0], 1);
			write(1, &x[1], 1);
			write(1, &x[2], 1);
			if (x[0] != '7' || x[1] != '8' || x[2] != '9')
			{
				write(1, ", ", 2);
			}
			x[2]++;
		}
		x[1]++;
	}
	x[0]++;
}
*/

int	main(void)
{
	int	x;

	x = 5;
	ft_print_combn(x);
}
