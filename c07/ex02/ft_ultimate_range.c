/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 10:51:26 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/08/18 10:51:27 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;
	int	n;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	n = 0;
	i = min;
	size = max - min;
	*range = malloc(sizeof(int) * (size));
	if (*range == NULL)
		return (-1);
	while (n < size)
	{
		(*range)[n] = i;
		n++;
		i++;
	}
	return (n);
}
