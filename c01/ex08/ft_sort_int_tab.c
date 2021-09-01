/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 16:36:41 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/08/16 16:36:43 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	n;
	int	stock;

	n = 0;
	while (n < size - 1)
	{
		if (tab[n] > tab[n + 1])
		{
			stock = tab[n];
			tab[n] = tab[n + 1];
			tab[n + 1] = stock;
			n = 0;
		}
		else
		{
			n++;
		}
	}
}
