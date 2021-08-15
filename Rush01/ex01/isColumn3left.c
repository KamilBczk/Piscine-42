/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isColumn3left.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 16:06:30 by xle-boul          #+#    #+#             */
/*   Updated: 2021/08/15 18:07:51 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 3 | 2 x x x | 2  -> 3 | 2 3 4 1 | 2 */

void	isColumn322left(int table[6][6]);

void	isColumn3Down(int table[6][6])
{
	int	y;
	int	x;

	x = 1;
	y = 0;
	while (x <= 4)
	{
		if (table[5][x] == 3 && table[4][x] == 2 && table[0][x] == 2)
		{
			table[3][x] = 3;
			table[2][x] = 4;
			table[1][x] = 1;
		}
		x++;
	}
	isColumn322left(table);
}

void	isColumn3Up(int table[6][6])
{
	int	y;
	int	x;

	x = 1;
	y = 0;
	while (x <= 4)
	{
		if (table[0][x] == 3 && table[5][x] == 2 && table[1][x] == 2)
		{
			table[2][x] = 3;
			table[3][x] = 4;
			table[4][x] = 1;
		}
		x++;
	}
	isColumn3Down(table);
}

void	isColumn3right(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[y][5] == 3 && table[y][4] == 2 && table[y][0] == 2)
		{
			table[y][3] = 3;
			table[y][2] = 4;
			table[y][1] = 1;
		}
		y++;
	}
	isColumn3Up(table);
}

void	isColumn3left(int table[6][6])
{
	int	y;
	int	x;

	x = 0;
	y = 1;
	while (y <= 4)
	{
		if (table[y][0] == 3 && table[y][5] == 2 && table[y][1] == 2)
		{
			table[y][2] = 3;
			table[y][3] = 4;
			table[y][4] = 1;
		}
		y++;
	}
	isColumn3right(table);
}
