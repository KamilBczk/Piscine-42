/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isColumn3342left.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 18:44:44 by xle-boul          #+#    #+#             */
/*   Updated: 2021/08/15 20:19:55 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	autoFillRow(int table[6][6]);

/* 3 | x x 3 4 | 2  => 3 | 2 1 3 4 | 2 */

void	isRow3342down(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[0][y] == 1 && table[5][y] == 3
		&& table[1][y] == 4 && table[y][2] == 3)
		{
			table[3][y] = 1;
			table[4][y] = 2;
		}
		y++;
	}
	autoFillRow(table);
}

void	isRow3342up(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[0][y] == 3 && table[5][y] == 1
		&& table[3][y] == 3 && table[y][4] == 4)
		{
			table[1][y] = 2;
			table[2][y] = 1;
		}
		y++;
	}
	isRow3342down(table);
}

void	isColumn3342right(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[y][0] == 1 && table[y][5] == 3
		&& table[y][1] == 4 && table[y][2] == 3)
		{
			table[y][3] = 1;
			table[y][4] = 2;
		}
		y++;
	}
	isRow3342up(table);
}

void	isColumn3342left(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[y][0] == 3 && table[y][3] == 3
		&& table[y][4] == 4 && table[y][5] == 1)
		{
			table[y][1] = 2;
			table[y][2] = 2;
		}
		y++;
	}
	isColumn3342right(table);
}
