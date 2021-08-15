/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 15:33:00 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/08/15 21:25:30 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	isColumn1left(int table[6][6]);
int		checkNumbers(char *numbersRaw);
void	initTable(int tab[6][6]);
void	rawToNumber(char *numbersRaw, int table[6][6]);
void	printTable(int tab[6][6]);

void	lancementDesConditions(int table[6][6])
{
	isColumn1left(table);
}

int	checkTableRowColumn(int table[6][6])
{
	int	x;
	int	y;
	int	result;

	x = 1;
	y = 1;
	result = 0;
	while (y != 5)
	{
		while (x != 5)
		{
			result += table[y][x];
			x++;
		}
		x = 1;
		y++;
		if (!(result == 10))
		{
			write(1, "Error\n", 6);
			return (0);
		}
		result = 0;
	}
	return (1);
}

int	checkTable(int table[6][6])
{
	int	x;
	int	y;

	x = 1;
	y = 1;
	while (y != 5)
	{
		while (x != 5)
		{
			if (!(table[y][x] >= 1 && table[y][x] <= 4))
			{
				write(1, "Error\n", 6);
				return (0);
			}
			x++;
		}
		x = 1;
		y++;
	}
	return (1);
}

/* bus => Gere le programme */

int	bus(char *numbersRaw)
{
	int	i;
	int	table[6][6];

	i = 0;
	if (checkNumbers(numbersRaw) == 1)
	{
		initTable(table);
		rawToNumber(numbersRaw, table);
		while (i != 5)
		{
			lancementDesConditions(table);
			i++;
		}
		if (checkTable(table) == 0)
			return (0);
		if (checkTableRowColumn(table) == 0)
			return (0);
		printTable(table);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		bus(argv[1]);
}
