/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 13:14:10 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/08/06 16:59:15 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	nb1;
	int	nb2;

	nb1 = 0;
	while (nb1 <= 99)
	{
		nb2 = nb1 + 1;
		while (nb2 <= 99)
		{
			ft_putchar(nb1 / 10 + '0');
			ft_putchar(nb1 % 10 + '0');
			ft_putchar(' ');
			ft_putchar(nb2 / 10 + '0');
			ft_putchar(nb2 % 10 + '0');
			if (nb1 != 98 || nb2 != 99)
			{
				write(1, ", ", 2);
			}
			nb2++;
		}
		nb1++;
	}
}
