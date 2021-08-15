/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isColumn233left.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 16:21:28 by xle-boul          #+#    #+#             */
/*   Updated: 2021/08/15 18:10:42 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 2 | x x 3 x | 3  => 2 | x 4 3 x | 3 */

void	isColumn234left(int table[6][6]);

void	isRow233down(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[0][y] == 3 && table[5][y] == 2 && table[2][y] == 3)
		{
			table[3][y] = 4;
		}
		y++;
	}
	isColumn234left(table);
}

void	isRow233up(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[0][y] == 2 && table[5][y] == 3 && table[3][y] == 3)
		{
			table[2][y] = 4;
		}
		y++;
	}
	isRow233down(table);
}

void	isColumn233right(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[y][0] == 3 && table[y][5] == 2 && table[y][2] == 3)
		{
			table[y][3] = 4;
		}
		y++;
	}
	isRow233up(table);
}

void	isColumn233left(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[y][0] == 2 && table[y][3] == 3 && table[y][5] == 3)
		{
			table[y][2] = 4;
		}
		y++;
	}
	isColumn233right(table);
}
