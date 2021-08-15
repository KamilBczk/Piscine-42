/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isColumn3412left.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 18:42:34 by xle-boul          #+#    #+#             */
/*   Updated: 2021/08/15 18:47:11 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 3 | x x 4 1 | 2  => 3 | 2 3 4 1 | 2 */

void	isColumn3342left(int table[6][6]);

void	isRow3412down(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[0][y] == 2 && table[5][y] == 3
		&& table[1][y] == 1 && table[y][2] == 4)
		{
			table[3][y] = 3;
			table[4][y] = 2;
		}
		y++;
	}
	isColumn3342left(table);
}

void	isRow3412up(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[0][y] == 3 && table[5][y] == 2
		&& table[3][y] == 4 && table[y][4] == 2)
		{
			table[1][y] = 2;
			table[2][y] = 3;
		}
		y++;
	}
	isRow3412down(table);
}

void	isColumn3412right(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[y][0] == 2 && table[y][5] == 3
		&& table[y][1] == 1 && table[y][2] == 4)
		{
			table[y][3] = 3;
			table[y][4] = 2;
		}
		y++;
	}
	isRow3412up(table);
}

void	isColumn3412left(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[y][0] == 3 && table[y][3] == 4
		&& table[y][4] == 1 && table[y][5] == 2)
		{
			table[y][1] = 2;
			table[y][2] = 3;
		}
		y++;
	}
	isColumn3412right(table);
}
