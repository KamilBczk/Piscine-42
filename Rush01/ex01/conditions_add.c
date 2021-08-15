/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conditions_add.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 17:47:49 by xle-boul          #+#    #+#             */
/*   Updated: 2021/08/15 17:47:52 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 2 | 3 2 x x | 2  => 2 | 3 2 4 1 | 2 */

void	isColumn2322left(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[y][0] == 2 && table[y][1] == 3
		&& table[y][2] == 2 && table[y][5] == 2)
		{
			table[y][3] = 4;
			table[y][4] = 1;
		}
		y++;
	}
}

void	isColumn2322right(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[y][0] == 2 && table[y][5] == 2
		&& table[y][3] == 2 && table[y][4] == 3)
		{
			table[y][1] = 1;
			table[y][2] = 4;
		}
		y++;
	}
}

void	isRow2322up(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[0][y] == 2 && table[5][y] == 2
		&& table[1][y] == 3 && table[y][2] == 2)
		{
			table[3][y] = 4;
			table[4][y] = 1;
		}
		y++;
	}
}

void	isRow2322down(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[0][y] == 2 && table[5][y] == 2
		&& table[3][y] == 2 && table[y][4] == 3)
		{
			table[1][y] = 1;
			table[2][y] = 4;
		}
		y++;
	}
}

/* 2 | 2 4 x x | 2  => 2 | 2 4 1 3 | 2 */

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
}

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
}

/* 3 | x x 4 1 | 2  => 3 | 2 3 4 1 | 2 */

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
}

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
}

/* 3 | x x 3 4 | 2  => 3 | 2 1 3 4 | 2 */

void	isColumn3342left(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[y][0] == 3 && table[y][3] == 3
		&& table[y][4] == 4 && table[y][5] == 1)
		{
			table[y][1] = 2;
			table[y][2] = 2;
		}
		y++;
	}
}

void	isColumn3342right(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[y][0] == 1 && table[y][5] == 3
		&& table[y][1] == 4 && table[y][2] == 3)
		{
			table[y][3] = 1;
			table[y][4] = 2;
		}
		y++;
	}
}

void	isRow3342up(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[0][y] == 3 && table[5][y] == 1
		&& table[3][y] == 3 && table[y][4] == 4)
		{
			table[1][y] = 2;
			table[2][y] = 1;
		}
		y++;
	}
}

void	isRow3342down(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[0][y] == 1 && table[5][y] == 3
		&& table[1][y] == 4 && table[y][2] == 3)
		{
			table[3][y] = 1;
			table[4][y] = 2;
		}
		y++;
	}
}
