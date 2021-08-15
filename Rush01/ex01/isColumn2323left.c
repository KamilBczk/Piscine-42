/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isColumn2323left.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 16:32:56 by xle-boul          #+#    #+#             */
/*   Updated: 2021/08/15 18:13:14 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 2 | 3 x 2 x | 3  => 2 | 3 4 2 1 | 3 */

void	isColumn3141left(int table[6][6]);

void	isRow2323down(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[0][y] == 3 && table[2][y] == 2
		&& table[4][y] == 3 && table[5][y] == 2)
		{
			table[1][y] = 1;
			table[3][y] = 4;
		}
		y++;
	}
	isColumn3141left(table);
}

void	isRow2323up(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[0][y] == 2 && table[1][y] == 3
		&& table[3][y] == 2 && table[5][y] == 3)
		{
			table[2][y] = 4;
			table[4][y] = 1;
		}
		y++;
	}
	isRow2323down(table);
}

void	isColumn2323right(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[y][0] == 3 && table[y][5] == 2
		&& table[y][2] == 2 && table[y][4] == 3)
		{
			table[y][1] = 1;
			table[y][3] = 4;
		}
		y++;
	}
	isRow2323up(table);
}

void	isColumn2323left(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[y][0] == 2 && table[y][1] == 3
		&& table[y][3] == 2 && table[y][5] == 3)
		{
			table[y][2] = 4;
			table[y][4] = 1;
		}
		y++;
	}
	isColumn2323right(table);
}
