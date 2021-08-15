/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isColumn3432left.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 16:27:19 by xle-boul          #+#    #+#             */
/*   Updated: 2021/08/15 18:47:23 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	isColumn1413left(int table[6][6]);

void	isRow3432down(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[0][y] == 2 && table[5][y] == 3
		&& table[1][y] == 3 && table[2][y] == 4)
		{
			table[3][y] = 2;
			table[4][y] = 1;
		}
		y++;
	}
	isColumn1413left(table);
}

void	isRow3432up(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[0][y] == 3 && table[5][y] == 2
		&& table[4][y] == 3 && table[3][y] == 4)
		{
			table[1][y] = 1;
			table[2][y] = 2;
		}
		y++;
	}
	isRow3432down(table);
}

void	isColumn3432right(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[y][0] == 2 && table[y][5] == 3
		&& table[y][1] == 3 && table[y][2] == 4)
		{
			table[y][3] = 2;
			table[y][4] = 1;
		}
		y++;
	}
	isRow3432up(table);
}

void	isColumn3432left(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[y][0] == 3 && table[y][3] == 4
		&& table[y][4] == 3 && table[y][5] == 2)
		{
			table[y][1] = 1;
			table[y][2] = 2;
		}
		y++;
	}
	isColumn3432right(table);
}
