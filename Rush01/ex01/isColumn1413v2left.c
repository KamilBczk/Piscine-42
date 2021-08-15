/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isColumn1413v2left.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 16:31:06 by xle-boul          #+#    #+#             */
/*   Updated: 2021/08/15 18:12:42 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 1 | 4 x x 1 | 3  => 1 | 4 2 3 1 | 3 */

void	isColumn2323left(int table[6][6]);

void	isRow1413v2down(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[0][y] == 3 && table[1][y] == 1
		&& table[4][y] == 4 && table[5][y] == 1)
		{
			table[2][y] = 3;
			table[3][y] = 2;
		}
		y++;
	}
	isColumn2323left(table);
}

void	isRow1413v2up(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[0][y] == 1 && table[1][y] == 4
		&& table[4][y] == 1 && table[5][y] == 3)
		{
			table[2][y] = 2;
			table[3][y] = 3;
		}
		y++;
	}
	isRow1413v2down(table);
}

void	isColumn1413v2right(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[y][0] == 3 && table[y][1] == 1
		&& table[y][4] == 4 && table[y][5] == 1)
		{
			table[y][2] = 3;
			table[y][3] = 2;
		}
		y++;
	}
	isRow1413v2up(table);
}

void	isColumn1413v2left(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[y][0] == 1 && table[y][1] == 4
		&& table[y][4] == 1 && table[y][5] == 3)
		{
			table[y][2] = 2;
			table[y][3] = 3;
		}
		y++;
	}
	isColumn1413v2right(table);
}
