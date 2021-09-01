/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 21:48:31 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/08/17 21:48:32 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	nb;
	int	*memory;

	i = 0;
	if (min >= max)
		return (NULL);
	nb = max - min;
	memory = malloc(sizeof(int) * nb);
	if (memory == NULL)
		return (NULL);
	while (i <= nb)
	{
		memory[i] = i + min;
		i++;
	}
	return (memory);
}
void	debug_dump_array(int numbers[], int size)
{
	int	index;

	index = 0;
	while (index < size)
	{
		printf("{index : %d , valeur : %d} \n", index, numbers[index]);
		index++;
	}
}



int	main(void)
{
	int	min;
	int	max;

	min = 9;
	max = 10;
	ft_range(min, max);
	debug_dump_array(ft_range(min, max), max - min);
}
