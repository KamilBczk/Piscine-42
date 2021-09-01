/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 15:25:09 by najacque          #+#    #+#             */
/*   Updated: 2021/08/25 16:52:02 by najacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_line_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\n' && str[i] != '\0')
		++i;
	return (i);
}

char	*ft_seek_next_line(char *strmap)
{
	while (*strmap && *strmap != '\n')
		++strmap;
	if (*strmap == '\0')
		return (NULL);
	else
		return (strmap + 1);
}

int	ft_get_info(char *map, int *height, char *md)
{
	int	len;
	int	i;
	int	j;

	len = ft_line_len(map);
	i = 0;
	*height = 0;
	while (i < len - 3 && ('0' <= map[i] && map[i] <= '9'))
	{
		*height *= 10;
		*height += (int) map[i] - '0';
		++i;
	}
	j = 0;
	while (i < len && j < 3)
	{
		if (!(' ' <= map[i] && map[i] <= '~'))
			return (-1);
		md[j++] = map[i++];
	}
	if (i != len || md[0] == md[1] || md[1] == md[2] || md[2] == md[0])
		return (-1);
	return (0);
}

int	ft_check_line(char *mappos, char *info)
{
	int	count;

	if (mappos == NULL)
		return (-1);
	count = 0;
	while (mappos[count] != '\0' && mappos[count] != '\n')
	{
		if (mappos[count] == info[0] || mappos[count] == info[1])
			count++;
		else
			return (-1);
	}
	return (count);
}

int	ft_check_map(char *map, int *height, int *width, char *info)
{
	int	l;

	if (ft_get_info(map, height, info) == -1)
		return (0);
	map = ft_seek_next_line(map);
	*width = ft_check_line(map, info);
	if (*width <= 0)
		return (0);
	map = ft_seek_next_line(map);
	l = 2;
	while (ft_check_line(map, info) == *width)
	{
		map = ft_seek_next_line(map);
		++l;
	}
	if (l != *height + 1 || ft_check_line(map, info) != 0)
		return (0);
	return (-1);
}
