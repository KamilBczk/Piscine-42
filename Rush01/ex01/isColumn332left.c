/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isColumn332left.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 16:36:19 by xle-boul          #+#    #+#             */
/*   Updated: 2021/08/15 18:35:13 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 3 | x x x 3 | 2  => 3 | 1 2 4 3 | 2 */

void	isColumn2322left(int table[6][6]);

void	isRow332down(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[0][y] == 2 && table[5][y] == 3 && table[1][y] == 3)
		{
			table[2][y] = 4;
			table[3][y] = 2;
			table[4][y] = 1;
		}
		y++;
	}
	isColumn2322left(table);
}

void	isRow332up(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[0][y] == 3 && table[5][y] == 2 && table[4][y] == 3)
		{
			table[1][y] = 1;
			table[2][y] = 2;
			table[3][y] = 4;
		}
		y++;
	}
	isRow332down(table);
}

void	isColumn332right(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[y][0] == 2 && table[y][5] == 3 && table[y][1] == 3)
		{
			table[y][2] = 4;
			table[y][3] = 2;
			table[y][4] = 1;
		}
		y++;
	}
	isRow332up(table);
}

void	isColumn332left(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[y][0] == 3 && table[y][4] == 3 && table[y][5] == 2)
		{
			table[y][1] = 1;
			table[y][2] = 2;
			table[y][3] = 4;
		}
		y++;
	}
	isColumn332right(table);
}
