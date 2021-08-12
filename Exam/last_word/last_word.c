/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 20:23:29 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/08/12 21:40:16 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_putchar(char z)
{
	write(1, &z, 1);
}

void imprimer(char *x, int i)
{
	while (x[i] != 32 && x[i] != 9 && x[i] != '\0')
	{
		ft_putchar(x[i]);
		i++;
	}
}

void last_word(char *x)
{
	int i;
	int result;
	int pos;

	pos = 1;
	i = 0;
	while (x[i] != '\0')
	{
		if(!(x[i] == 32 || x[i] == 9))
		{
			if (pos == 1)
			{
				result = i;
				pos = 0;
			}
		}
		else
		{
			pos = 1;
		}
		i++;
	}
	imprimer(x, result);
}

int main(int argc, char **argv)
{
	if (argc == 2)
		last_word(argv[1]);
	ft_putchar('\n');
	return (0);
}
