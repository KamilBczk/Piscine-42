/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 21:20:01 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/08/24 21:20:05 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2", 2);
		nb = 147483648;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	nb = (nb % 10) + 48;
	write(1, &nb, 1);
}

void	ft_show_tab(struct s_stock_str *toprint)
{
	int		i;

	i = 0;
	while (toprint[i].str)
	{
		ft_putstr(toprint[i].str);
		write(1, "\n", 1);
		ft_putnbr(toprint[i].size);
		write(1, "\n", 1);
		ft_putstr(toprint[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
