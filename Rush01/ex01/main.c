/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 15:33:00 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/08/15 19:06:52 by xle-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	isColumn1left(int table[6][6]);

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
	while (y != 4)
	{
		while (x != 4)
		{
/* On parcours chaque case et on la mets a 0 */
			ft_putchar(' ');
			ft_putchar(tab[y + 1][x + 1] + '0');
			if(!(x==3))
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

/* 5) rawToNumber => Ici on eneleve les espaces du parametre renseigne on garde juste les chiffres dans une variable */

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
	isColumn1left(table);
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
		//table[2][2] = 4;
		/* table[4][1] = 2;
		table[5][1] = 3;*/
		lancementDesConditions(table);
		lancementDesConditions(table);
		lancementDesConditions(table);
		lancementDesConditions(table);
        lancementDesConditions(table);
        lancementDesConditions(table);
		printTable(table);
	}
}

/* 1) main => lancer le programme */

int	main(int argc, char **argv)
{
	if (argc == 2)
		bus(argv[1]);
}
