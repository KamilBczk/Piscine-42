/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clueTable.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 19:36:42 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/08/15 20:14:39 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Ici on remplis les nombres renseignes en param dans le tableau*/

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
		table[y][x] = numbers[i] - '0';
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

/* Ici on remplis les nombres renseignes en param dans le tableau */

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
		table[y][x] = numbers[i] - '0';
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

/* Ici on garde juste les chiffres du param. */

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
