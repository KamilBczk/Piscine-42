/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkNumbers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 19:41:58 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/08/15 20:06:53 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* Cette fonction sert a voir si les nombres passes en param sont correct. */

int	checkNumbers(char *numbersRaw)
{
	int	i;
	int	nombreDeChiffres;

	nombreDeChiffres = 0;
	i = 0;
	while (numbersRaw[i] != '\0')
	{
		if (numbersRaw[i] >= 49 && numbersRaw[i] <= 52)
			nombreDeChiffres++;
		else if (!(numbersRaw[i] == 32))
		{
			write(1, "Error\n", 6);
			return (0);
		}
		i++;
	}
	if (nombreDeChiffres != 16)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	return (1);
}
