/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 15:33:00 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/08/14 15:33:05 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

/* Conditions */

/* 1 | x x x x | x => 1 | 4 x x x | x */

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
}

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
}

/* 4 | x x x x | x => 4 | 1 2 3 4 | x */

void	isColumn4left(int table[6][6])
{
	int	y;
	int	x;

	x = 0;
	y = 1;
	while (y <= 4)
	{
		if (table[y][x] == 4)
		{
			x++;
			while (x <= 4)
			{
				table[y][x] = x;
				x++;
			}
		}
		y++;
	}
}

void	isColumn4right(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[y][5] == 4)
		{
			table[y][4] = 1;
			table[y][3] = 2;
			table[y][2] = 3;
			table[y][1] = 4;
		}
		y++;
	}
}

void	isRow4Up(int table[6][6])
{
	int	y;
	int	x;

	x = 1;
	y = 0;
	while (x <= 4)
	{
		if (table[y][x] == 4)
		{
			y = 1;
			while (y <= 4)
			{
				table[y][x] = y;
				y++;
			}
		}
		x++;
	}
}

void	isRow4Down(int table[6][6])
{
	int	y;
	int	x;

	x = 1;
	y = 5;
	while (x <= 4)
	{
		if (table[y][x] == 4)
		{
			table[4][x] = 1;
			table[3][x] = 2;
			table[2][x] = 3;
			table[1][x] = 4;
		}
		x++;
	}
}

/* 3 | 2 x x x | 2  -> 3 | 2 3 4 1 | 2 */

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
}

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
}

/* 3 | x x x 2 | 2  -> 3 | 1 3 4 2 | 2 */

void	isColumn322left(int table[6][6])
{
	int	y;
	int	x;

	x = 0;
	y = 1;
	while (y <= 4)
	{
		if (table[y][0] == 3 && table[y][5] == 2 && table[y][4] == 2)
		{
			table[y][2] = 3;
			table[y][3] = 4;
			table[y][1] = 1;
		}
		y++;
	}
}

void	isColumn322right(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[y][5] == 3 && table[y][1] == 2 && table[y][0] == 2)
		{
			table[y][3] = 3;
			table[y][2] = 4;
			table[y][4] = 1;
		}
		y++;
	}
}

void	isRow322up(int table[6][6])
{
	int	y;
	int	x;

	x = 1;
	y = 0;
	while (x <= 4)
	{
		if (table[0][x] == 3 && table[5][x] == 2 && table[4][x] == 2)
		{
			table[2][x] = 3;
			table[3][x] = 4;
			table[1][x] = 1;
		}
		x++;
	}
}

void	isRow322down(int table[6][6])
{
	int	y;
	int	x;

	x = 1;
	y = 0;
	while (x <= 4)
	{
		if (table[5][x] == 3 && table[1][x] == 2 && table[0][x] == 2)
		{
			table[3][x] = 3;
			table[2][x] = 4;
			table[4][x] = 1;
		}
		x++;
	}
}

/* 2 | x x x 4 | x  => 2 | 3 x x 4 | x  */

void	isColumn2left4end(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[y][0] == 2 && table[y][4] == 4)
		{
			table[y][1] = 3;
		}
		y++;
	}
}

void	isColumn2right4end(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[y][5] == 2 && table[y][1] == 4)
		{
			table[y][4] = 3;
		}
		y++;
	}
}

void	isRow2Up4end(int table[6][6])
{
	int	x;

	x = 1;
	while (x <= 4)
	{
		if (table[0][x] == 2 && table[4][x] == 4)
		{
			table[1][x] = 3;
		}
		x++;
	}
}

void	isRow2Down4end(int table[6][6])
{
	int	x;

	x = 1;
	while (x <= 4)
	{
		if (table[5][x] == 2 && table[1][x] == 4)
		{
			table[4][x] = 3;
		}
		x++;
	}
}

/* 2 | x x 3 x | 3  => 2 | x 4 3 x | 3 */

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
}

void	isRow233up(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[0][y] == 2 && table[5][y] == 3 && table[3][y] == 3)
		{
			table[2][y] = 3;
		}
		y++;
	}
}

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
}

/* 2 | 3 4 x x | 2  => 2 | 3 4 1 2 | 2 */

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
}

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
}

/* 3 | x x 4 3 | 2  => 3 | 1 2 4 3 | 2 */

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
}

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
}

/* 1 | 4 x 1 x | 3  => 1 | 4 3 1 2 | 3 */

void	isColumn1413left(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[y][0] == 1 && table[y][1] == 4
		&& table[y][3] == 1 && table[y][5] == 3)
		{
			table[y][2] = 3;
			table[y][4] = 2;
		}
		y++;
	}
}

void	isColumn1413right(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[y][0] == 3 && table[y][5] == 1
		&& table[y][2] == 1 && table[y][4] == 4)
		{
			table[y][1] = 2;
			table[y][3] = 3;
		}
		y++;
	}
}

void	isRow1413up(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[0][y] == 1 && table[2][y] == 4
		&& table[3][y] == 1 && table[5][y] == 3)
		{
			table[2][y] = 3;
			table[4][y] = 2;
		}
		y++;
	}
}

void	isRow1413down(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[0][y] == 3 && table[2][y] == 1
		&& table[4][y] == 4 && table[5][y] == 1)
		{
			table[1][y] = 2;
			table[3][y] = 3;
		}
		y++;
	}
}

/* 1 | 4 x x 1 | 3  => 1 | 4 2 3 1 | 3 */

void	isColumn1413v2left(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[y][0] == 1 && table[y][1] == 4
		&& table[y][4] == 1 && table[y][5] == 3)
		{
			table[y][2] = 2;
			table[y][3] = 3;
		}
		y++;
	}
}

void	isColumn1413v2right(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[y][0] == 3 && table[y][1] == 1
		&& table[y][4] == 4 && table[y][5] == 1)
		{
			table[y][2] = 3;
			table[y][3] = 2;
		}
		y++;
	}
}

void	isRow1413v2up(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[0][y] == 1 && table[1][y] == 4
		&& table[4][y] == 1 && table[5][y] == 3)
		{
			table[2][y] = 2;
			table[3][y] = 3;
		}
		y++;
	}
}

void	isRow1413v2down(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[0][y] == 3 && table[1][y] == 1
		&& table[4][y] == 4 && table[5][y] == 1)
		{
			table[2][y] = 3;
			table[3][y] = 2;
		}
		y++;
	}
}

/* 2 | 3 x 2 x | 3  => 2 | 3 4 2 1 | 3 */

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
}

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
}

/* 3 | x x 1 4 | 1  => 3 | 2 3 1 4 | 1 */

void	isColumn3141left(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[y][0] == 3 && table[y][3] == 1
		&& table[y][4] == 4 && table[y][5] == 1)
		{
			table[y][1] = 2;
			table[y][2] = 3;
		}
		y++;
	}
}

void	isColumn3141right(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[y][0] == 1 && table[y][5] == 3
		&& table[y][1] == 4 && table[y][2] == 1)
		{
			table[y][3] = 3;
			table[y][4] = 2;
		}
		y++;
	}
}

void	isRow3141up(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[0][y] == 3 && table[3][y] == 1
		&& table[4][y] == 4 && table[5][y] == 1)
		{
			table[1][y] = 2;
			table[2][y] = 3;
		}
		y++;
	}
}

void	isRow3141down(int table[6][6])
{
	int	y;

	y = 1;
	while (y <= 4)
	{
		if (table[0][y] == 1 && table[1][y] == 4
		&& table[2][y] == 1 && table[5][y] == 3)
		{
			table[3][y] = 3;
			table[4][y] = 2;
		}
		y++;
	}
}

/* 3 | x x x 3 | 2  => 3 | 1 2 4 3 | 2 */

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
}

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
}

/*

	####### AUTOFILL #######
	####### AUTOFILL #######
	####### AUTOFILL #######

*/

void	autoFillRow(int table[6][6])
{
	int	results[3];

	cords[0] = 1;
	cords[1] = 1;
	results[0] = 0;
	results[1] = 0;
	while (cords[1] != 5)
	{
		while (cords[0] != 5)
		{
			if (table[cords[1]][cords[0]] == 0)
			{
				results[2] = cords[0];
				results[0]++;
			}
			else
				results[1] += table[cords[1]][cords[0]];
			cords[0]++;
		}
		if (results[0] == 1)
			table[cords[1]][results[2]] = 10 - results[1];
		results[0] = 0;
		results[1] = 0;
		cords[0] = 1;
		cords[1]++;
	}
}

/*

	####### CODE #######
	####### CODE #######
	####### CODE #######

*/

void	ft_putchar(char z)
{
	write(1, &z, 1);
}

/* x) printTable => Ici on imprime le tableau */

void	printTable(int tab[6][6])
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (y != 6)
	{
		while (x != 6)
		{
/* On parcours chaque case et on la mets a 0 */
			ft_putchar(' ');
			ft_putchar(tab[y][x] + '0');
			ft_putchar(' ');
			x++;
		}
		ft_putchar('\n');
		x = 0;
		y++;
	}
}

/* 7) clueTableLeftRight => Ici on remplis les nombres renseignes en param dans le tableau*/

void	clueTableLeftRight(int numbers[16], int table[6][6])
{
	int	i;
	int	x;
	int	y;

	i = 8;
	x = 0;
	y = 1;
	while (y != 5)
	{
		table[y][x] = numbers[i] - '0'; // Le -'0' sert a enleve 48 car il y a eu une convertion char vers int
		y++;
		i++;
	}
	y = 1;
	x = 5;
	while (y != 5)
	{
		table[y][x] = numbers[i] - '0';
		y++;
		i++;
	}
}

/* 6) clueTableUpDown => Ici on remplis les nombres renseignes en param dans le tableau */

void	clueTableUpDown(int numbers[16], int table[6][6])
{
	int	i;
	int	x;
	int	y;

	i = 0;
	x = 1;
	y = 0;
	while (x != 5)
	{
		table[y][x] = numbers[i] - '0'; // Le -'0' sert a enleve 48 car il y a eu une convertion char vers int
		x++;
		i++;
	}
	x = 1;
	y = 5;
	while (x != 5)
	{
		table[y][x] = numbers[i] - '0';
		x++;
		i++;
	}
}

/* 5) rawToNumber => Ici on eneleve les espaces du parametre renseigner on garde juste les chiffres dans une variable */

void	rawToNumber(char *numbersRaw, int table[6][6])
{
	int	i;
	int	f;
	int	numbers[16];

	f = 0;
	i = 0;
	while (numbersRaw[i] != '\0')
	{
		if (!(numbersRaw[i] == 32))
		{
			numbers[f] = numbersRaw[i];
			f++;
		}
		i++;
	}
	clueTableUpDown(numbers, table);
	clueTableLeftRight(numbers, table);
}

/* 4) initTable => Ici on remplis le tableau de 0 pour ne pas avoir de problemes plus tard. */

void	initTable(int tab[6][6])
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (y != 6)
	{
		while (x != 6)
		{
			// On parcours chaque case et on la mets a 0
			tab[y][x] = 0;
			x++;
		}
		x = 0;
		y++;
	}
}

/* 3) checkNumbers => Cette fonction sert a voir si les nombres passes en param sont correct. */

int	checkNumbers(char *numbersRaw)
{
	int	i;
	int	nombreDeChiffres;

	nombreDeChiffres = 0;
	i = 0;
	while (numbersRaw[i] != '\0')
	{
		// On incremente la variable pour savoir cb il y a de nombres dans le parametre
		if (numbersRaw[i] >= 49 && numbersRaw[i] <= 52)
		{
			nombreDeChiffres++;
		}
		// Si les chiffres ne sont pas entre un et 4 on imprime une erreur
		else if (!(numbersRaw[i] == 32))
		{
			printf("Introduisez juste des numeros entre 1-4");
			return (0);
		}
		i++;
	}
// Si il n y a pas 16 chiffres on imprime une erreur
	if (nombreDeChiffres != 16)
	{
		printf("Pas assez de catacteres");
		return (0);
	}
	// Si tout va bien on retourne 1
	return (1);
}

void	lancementDesConditions(int table[6][6])
{
	isColumn4left(table);
	isColumn4right(table);
	isRow4Up(table);
	isRow4Down(table);
	
	isColumn1left(table);
	isColumn1right(table);
	isColumn1up(table);
	isColumn1down(table);
	
	isColumn2left4end(table);
	isColumn2right4end(table);
	isRow2Up4end(table);
	isRow2Down4end(table);
	
	isColumn3left(table);
	isColumn3right(table);
	isColumn3Up(table);
	isColumn3Down(table);
	
	isColumn234left(table);
	isColumn234right(table);
	isRow234up(table);
	isRow234down(table);
	
	isColumn322left(table);
	isColumn322right(table);
	isRow322up(table);
	isRow322down(table);
	
	isColumn3432left(table);
	isColumn3432right(table);
	isRow3432up(table);
	isRow3432down(table);
	
	isColumn1413left(table);
	isColumn1413right(table);
	isRow1413up(table);
	isRow1413down(table);

	isColumn2323left(table);
	isColumn2323right(table);
	isRow2323up(table);
	isRow2323down(table);

	isColumn3141left(table);
	isColumn3141right(table);
	isRow3141up(table);
	isRow3141down(table);

	isColumn332left(table);
	isColumn332right(table);
	isRow332up(table);
	isRow332down(table);

	isColumn233left(table);
	isColumn233right(table);
	isRow233up(table);
	isRow233down(table);
	
	isColumn1413v2left(table);
	isColumn1413v2right(table);
	isRow1413v2up(table);
	isRow1413v2down(table);

}

/* 2) bus => Gere le programme */

void	bus(char *numbersRaw)
{
	int	table[6][6];
	// Verification si le nombre entree en param. est bon
	if (checkNumbers(numbersRaw) == 1)
	{
		initTable(table);
		rawToNumber(numbersRaw, table);
		table[2][2] = 4;
		/*
		table[4][1] = 2;
		table[5][1] = 3;*/
		lancementDesConditions(table);
		lancementDesConditions(table);
		lancementDesConditions(table);
		lancementDesConditions(table);
		autoFillRow(table);
		printTable(table);
	}
}

/* 1) main => lancer le programme */

int	main(int argc, char **argv)
{
	if (argc == 2)
		bus(argv[1]);
}
