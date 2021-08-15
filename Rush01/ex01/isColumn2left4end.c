/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isColumn2left4end.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 16:15:56 by xle-boul          #+#    #+#             */
/*   Updated: 2021/08/15 18:09:24 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 2 | x x x 4 | x  => 2 | 3 x x 4 | x  */

void	isColumn233left(int table[6][6]);

void	isRow2Down4end(int table[6][6])
{
	int	x;

	x = 1;
	while (x <= 4)
	{
		if (table[5][x] == 2 && table[1][x] == 4)
		{
			table[4][x] = 3;
		}
		x++;
	}
	isColumn233left(table);
}

void	isRow2Up4end(int table[6][6])
{
	int	x;

	x = 1;
	while (x <= 4)
	{
		if (table[0][x] == 2 && table[4][x] == 4)
		{
			table[1][x] = 3;
		}
		x++;
	}
	isRow2Down4end(table);
}

void	isColumn2right4end(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[y][5] == 2 && table[y][1] == 4)
		{
			table[y][4] = 3;
		}
		y++;
	}
	isRow2Up4end(table);
}

void	isColumn2left4end(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[y][0] == 2 && table[y][4] == 4)
		{
			table[y][1] = 3;
		}
		y++;
	}
	isColumn2right4end(table);
}