/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 14:03:33 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/08/16 14:03:34 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	lastIndex;
	int	temp;

	i = 0;
	lastIndex = size - 1;
	while (i != size / 2)
	{
		temp = tab[lastIndex];
		tab[lastIndex] = tab[i];
		tab[i] = temp;
		i++;
		lastIndex--;
	}
}
