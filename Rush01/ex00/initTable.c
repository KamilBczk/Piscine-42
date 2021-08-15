/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initTable.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 19:38:10 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/08/15 20:19:03 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Ici on remplis le tableau de 0 pour ne pas avoir de problemes plus tard. */

void	initTable(int tab[6][6])
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (y != 6)
	{
		while (x != 6)
		{
			tab[y][x] = 0;
			x++;
		}
		x = 0;
		y++;
	}
}
