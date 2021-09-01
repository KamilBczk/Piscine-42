/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 19:55:01 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/08/25 19:55:06 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "valid_map.h"
#include "ft_make_map.h"

int	ft_count_obst(char *map, char *car)
{
	int	i;
	int	count;
	int	f;

	i = 0;
	count = 0;
	f = 0;
	while (map[i] != '\0' && map[i] != '\n')
	{
		if (map[i] == car[1])
			count++;
		i++;
	}
	count += 2;
	return (count);
}

int	*ft_map_to_struct(char *map, char *car)
{
	int	count;
	int	*result;
	int	i;
	int	f;

	count = ft_count_obst(map, car);
	i = 0;
	f = 0;
	result = malloc(sizeof(int) * (count + 1));
	if (result == NULL)
		return (0);
	result[f++] = count;
	result[f++] = -1;
	i = 0;
	while (map[i] != '\0' && map[i] != '\n')
	{
		if (map[i] == car[1])
			result[f++] = i;
		i++;
	}
	result[f] = i;
	return (result);
}

t_map	ft_mk_map(char *strmap)
{
	int		w;
	int		h;
	int		l;
	char	info[3];
	t_map	m;

	if (!ft_check_map(strmap, &h, &w, info))
	{
		m.width = -1;
		return (m);
	}
	m = ft_acreate_map(w, h);
	l = 0;
	while (l < m.height)
	{
		strmap = ft_seek_next_line(strmap);
		m.obsts[l] = ft_map_to_struct(strmap, info);
		++l;
	}
	return (m);
}
