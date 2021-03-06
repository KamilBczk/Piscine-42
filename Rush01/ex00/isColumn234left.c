/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isColumn234left.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 16:25:33 by xle-boul          #+#    #+#             */
/*   Updated: 2021/08/15 18:11:26 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 2 | 3 4 x x | 2  => 2 | 3 4 1 2 | 2 */

void	isColumn3432left(int table[6][6]);

void	isRow234down(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[0][y] == 2 && table[5][y] == 2
		&& table[4][y] == 3 && table[3][y] == 4)
		{
			table[1][y] = 2;
			table[2][y] = 1;
		}
		y++;
	}
	isColumn3432left(table);
}

void	isRow234up(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[0][y] == 2 && table[5][y] == 2
		&& table[1][y] == 3 && table[2][y] == 4)
		{
			table[3][y] = 1;
			table[4][y] = 2;
		}
		y++;
	}
	isRow234down(table);
}

void	isColumn234right(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[y][0] == 2 && table[y][5] == 2
		&& table[y][3] == 4 && table[y][4] == 3)
		{
			table[y][1] = 2;
			table[y][2] = 1;
		}
		y++;
	}
	isRow234up(table);
}

void	isColumn234left(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[y][0] == 2 && table[y][1] == 3
		&& table[y][2] == 4 && table[y][5] == 2)
		{
			table[y][3] = 1;
			table[y][4] = 2;
		}
		y++;
	}
	isColumn234right(table);
}
