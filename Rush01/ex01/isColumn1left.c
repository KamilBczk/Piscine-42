/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isColumn1left.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 15:51:07 by xle-boul          #+#    #+#             */
/*   Updated: 2021/08/15 18:05:16 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 1 | x x x x | x => 1 | 4 x x x | x */

void	isColumn4left(int table[6][6]);

void	isColumn1down(int table[6][6])
{
	int	y;
	int	x;

	x = 1;
	y = 5;
	while (x <= 4)
	{
		if (table[y][x] == 1)
		{
			table[4][x] = 4;
		}
		x++;
	}
	isColumn4left(table);
}

void	isColumn1up(int table[6][6])
{
	int	y;
	int	x;

	x = 1;
	y = 0;
	while (x <= 4)
	{
		if (table[y][x] == 1)
		{
			table[1][x] = 4;
		}
		x++;
	}
	isColumn1down(table);
}

void	isColumn1right(int table[6][6])
{
	int	y;
	int	x;

	x = 5;
	y = 1;
	while (y <= 4)
	{
		if (table[y][x] == 1)
		{
			table[y][4] = 4;
		}
		y++;
	}
	isColumn1up(table);
}

void	isColumn1left(int table[6][6])
{
	int	y;
	int	x;

	x = 0;
	y = 1;
	while (y <= 4)
	{
		if (table[y][x] == 1)
		{
			table[y][1] = 4;
		}
		y++;
	}
	isColumn1right(table);
}
