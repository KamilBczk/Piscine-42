/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 16:14:04 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/08/11 16:14:05 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_putnbr_base_checkbase(char *base)
{
	int i;
	int f;

	i = 0;
	f = 0;
	while(base[i] != '\0')
	{
		if(base[i] == 43 || base[i] == 45)
			return 0;
		f=i+1;
		while(base[f] != '\0')
		{
			if (base[f] == base[i])
				return 0;
			f++;
		}
		i++;
	}
	if(i < 2)
		return 0;
	return(i);        
}

int *ft_putnbr_base_numberToBase(int base, int number)
{
	int result;
	int div = number;
	int reste[255];
	int f = 0;
	int i = 0;
	int temp;

	while(div != 0)
	{
		result = div;
		div /= base;
		result %= base;
		reste[f] = result;
		f++;
		printf(" . %d . ", result);
	}
	printf("\n");
	while (i<f/2)
	{
		temp = reste[i];
		reste[i]=reste[f-1-i];
		reste[f-1-i]=temp;
		i++;
		printf("I : %d", reste[i]);
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	nbDeCaracteres = ft_putnbr_base_checkbase(base);
	if (nbDeCaracteres > 0)
		ft_putnbr_base_numberToBase(nbDeCaracteres, nbr);
}

int main()
{
	int nb = 8019;
	char x[] = "0123456789ABCDEF";
	ft_putnbr_base(nb, x);
}