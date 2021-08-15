/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isColumn2242left.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 18:38:48 by xle-boul          #+#    #+#             */
/*   Updated: 2021/08/15 18:42:17 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 2 | 2 4 x x | 2  => 2 | 2 4 1 3 | 2 */

void	isColumn3412left(int table[6][6]);

void	isRow2242down(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[0][y] == 2 && table[5][y] == 2
		&& table[3][y] == 4 && table[y][4] == 2)
		{
			table[1][y] = 1;
			table[2][y] = 3;
		}
		y++;
	}
	isColumn3412left(table);
}

void	isRow2242up(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[0][y] == 2 && table[5][y] == 2
		&& table[1][y] == 2 && table[y][2] == 4)
		{
			table[3][y] = 1;
			table[4][y] = 3;
		}
		y++;
	}
	isRow2242down(table);
}

void	isColumn2242right(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[y][0] == 2 && table[y][5] == 2
		&& table[y][3] == 4 && table[y][4] == 2)
		{
			table[y][1] = 3;
			table[y][2] = 1;
		}
		y++;
	}
	isRow2242up(table);
}

void	isColumn2242left(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[y][0] == 2 && table[y][1] == 2
		&& table[y][2] == 4 && table[y][5] == 2)
		{
			table[y][3] = 1;
			table[y][4] = 3;
		}
		y++;
	}
	isColumn2242right(table);
}
