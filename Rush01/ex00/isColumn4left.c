/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isColumn4left.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 16:00:05 by xle-boul          #+#    #+#             */
/*   Updated: 2021/08/15 18:07:03 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 4 | x x x x | x => 4 | 1 2 3 4 | x */

void	isColumn3left(int table[6][6]);

void	isRow4Down(int table[6][6])
{
	int	y;
	int	x;

	x = 1;
	y = 5;
	while (x <= 4)
	{
		if (table[y][x] == 4)
		{
			table[4][x] = 1;
			table[3][x] = 2;
			table[2][x] = 3;
			table[1][x] = 4;
		}
		x++;
	}
	isColumn3left(table);
}

void	isRow4Up(int table[6][6])
{
	int	y;
	int	x;

	x = 1;
	y = 0;
	while (x <= 4)
	{
		if (table[y][x] == 4)
		{
			y = 1;
			while (y <= 4)
			{
				table[y][x] = y;
				y++;
			}
		}
		x++;
	}
	isRow4Down(table);
}

void	isColumn4right(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[y][5] == 4)
		{
			table[y][4] = 1;
			table[y][3] = 2;
			table[y][2] = 3;
			table[y][1] = 4;
		}
		y++;
	}
	isRow4Up(table);
}

void	isColumn4left(int table[6][6])
{
	int	y;
	int	x;

	x = 0;
	y = 1;
	while (y <= 4)
	{
		if (table[y][x] == 4)
		{
			x++;
			while (x <= 4)
			{
				table[y][x] = x;
				x++;
			}
		}
		y++;
	}
	isColumn4right(table);
}
