/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isColumn2322left.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 18:34:30 by xle-boul          #+#    #+#             */
/*   Updated: 2021/08/15 21:25:11 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 2 | 3 2 x x | 2  => 2 | 3 2 4 1 | 2 */

void	isColumn2242left(int table[6][6]);

void	isRow2322down(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[0][y] == 2 && table[5][y] == 2
		&& table[3][y] == 2 && table[y][4] == 3)
		{
			table[1][y] = 1;
			table[2][y] = 4;
		}
		y++;
	}
	isColumn2242left(table);
}

void	isRow2322up(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[0][y] == 2 && table[5][y] == 2
		&& table[1][y] == 3 && table[y][2] == 2)
		{
			table[3][y] = 4;
			table[4][y] = 1;
		}
		y++;
	}
	isRow2322down(table);
}

void	isColumn2322right(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[y][0] == 2 && table[y][5] == 2
		&& table[y][3] == 2 && table[y][4] == 3)
		{
			table[y][1] = 1;
			table[y][2] = 4;
		}
		y++;
	}
	isRow2322up(table);
}

void	isColumn2322left(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[y][0] == 2 && table[y][1] == 3
		&& table[y][2] == 2 && table[y][5] == 2)
		{
			table[y][3] = 4;
			table[y][4] = 1;
		}
		y++;
	}
	isColumn2322right(table);
}
