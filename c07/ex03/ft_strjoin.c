/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 13:24:48 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/08/18 13:24:50 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_str_length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_longeur_finale(char **str, int size, int sizesep)
{
	int		i;
	int		length;

	i = 0;
	length = 0;
	while (i < size)
	{
		length += ft_str_length(str[i]);
		i++;
	}
	if (size > 0)
		length += sizesep * (size - 1);
	return (length);
}

char	*ft_strcat(char *memory, char *src)
{
	int	i;
	int	x;

	x = 0;
	i = 0;
	while (memory[i] != '\0')
	{
		i++;
	}
	while (src[x] != '\0')
	{
		memory[i] = src[x];
		i++;
		x++;
	}
	memory[i] = '\0';
	return (memory);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		longeurFinale;
	char	*memory;
	int		i;
	int		j;

	j = 0;
	i = 0;
	if (size < 0)
		return (NULL);
	longeurFinale = ft_longeur_finale(strs, size, ft_str_length(sep));
	memory = malloc(sizeof(char) * (longeurFinale + 1));
	if (memory == NULL)
		return (0);
	memory[0] = '\0';
	while (j < size)
	{
		ft_strcat(memory, strs[j]);
		if (j < size - 1)
			ft_strcat(memory, sep);
		j++;
	}
	return (memory);
}
