/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printTable.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 19:35:02 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/08/15 20:23:31 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* Fonction ft_putchar */

void	ft_putchar(char z)
{
	write(1, &z, 1);
}

/* printTable => Ici on imprime le tableau */

void	printTable(int tab[6][6])
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (y != 4)
	{
		while (x != 4)
		{
			ft_putchar(' ');
			ft_putchar(tab[y + 1][x + 1] + '0');
			if (!(x == 3))
				ft_putchar(' ');
			x++;
		}
		ft_putchar('\n');
		x = 0;
		y++;
	}
}
