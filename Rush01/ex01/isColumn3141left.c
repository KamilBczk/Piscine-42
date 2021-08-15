/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isColumn3141left.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 16:34:46 by xle-boul          #+#    #+#             */
/*   Updated: 2021/08/15 18:13:40 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 3 | x x 1 4 | 1  => 3 | 2 3 1 4 | 1 */

void	isColumn332left(int table[6][6]);

void	isRow3141down(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[0][y] == 1 && table[1][y] == 4
		&& table[2][y] == 1 && table[5][y] == 3)
		{
			table[3][y] = 3;
			table[4][y] = 2;
		}
		y++;
	}
	isColumn332left(table);
}

void	isRow3141up(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[0][y] == 3 && table[3][y] == 1
		&& table[4][y] == 4 && table[5][y] == 1)
		{
			table[1][y] = 2;
			table[2][y] = 3;
		}
		y++;
	}
	isRow3141down(table);
}

void	isColumn3141right(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[y][0] == 1 && table[y][5] == 3
		&& table[y][1] == 4 && table[y][2] == 1)
		{
			table[y][3] = 3;
			table[y][4] = 2;
		}
		y++;
	}
	isRow3141up(table);
}

void	isColumn3141left(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[y][0] == 3 && table[y][3] == 1
		&& table[y][4] == 4 && table[y][5] == 1)
		{
			table[y][1] = 2;
			table[y][2] = 3;
		}
		y++;
	}
	isColumn3141right(table);
}
