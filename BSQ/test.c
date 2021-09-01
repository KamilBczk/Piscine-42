/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 22:41:44 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/08/25 22:41:46 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "algo.h"
#include "ft_make_map.h"
#include "map.h"
#include "shapes.h"
#include "utils.h"
#include "valid_map.h"
#define BUF_SIZE 50000000

void	ft_print_map(char *map, t_square sq, char full)
{
	int	i;
	int	y;
	int	x;

	i = 0;
	y = 0;
	x = 0;
	map = ft_seek_next_line(map);
	while (map[i] != '\0')
	{
		if ((sq.x <= x && x <= sq.x + sq.side - 1)
			&& (sq.y <= y && y <= sq.y + sq.side - 1))
			ft_putchar(full);
		else
			ft_putchar(map[i]);
		if (map[i] == '\n')
		{
			y++;
			x = 0;
		}
		else
			x++;
		i++;
	}
	return ;
}

int	ft_load_file(char *path, char **buffer, int buffsize)
{
	int		filde;
	int		len;

	filde = open(path, O_RDONLY);
	*buffer = malloc(sizeof(char) * buffsize + 1);
	if (filde == -1 || *buffer == NULL)
	{
		free(*buffer);
		return (-1);
	}
	len = read(filde, *buffer, buffsize);
	if (len == -1)
	{
		free(*buffer);
		return (-1);
	}
	if (close(filde) == -1)
	{
		free(*buffer);
		return (-1);
	}
	(*buffer)[len] = '\0';
	return (0);
}

char	*ft_read_stdin(void)
{
	int		i;
	int		fd;
	int		ret;
	char	*buf;

	buf = malloc(BUF_SIZE + 1);
	if (!buf)
		return (NULL);
	ret = read(0, buf, BUF_SIZE);
	i = ret;
	while (ret != 0)
	{
		ret = read(0, buf + i, BUF_SIZE);
		i += ret;
	}
	buf[i] = '\0';
	return (buf);
}

int	ft_one_pass(char *buffer, t_square *bsq)
{
	t_map	m;
	char	*fullpos;

	fullpos = ft_seek_next_line(buffer) - 2;
	m = ft_mk_map(buffer);
	if (m.width == -1)
	{
		write(2, "map error\n", 10);
		free(buffer);
		return (-1);
	}
	ft_set_square(bsq, 0, 0, 0);
	ft_find_bsq(m, bsq, 0, m.width - 1);
	ft_print_map(buffer, *bsq, *fullpos);
	free(buffer);
	ft_free_map(m);
	return (0);
}

int	main(int argc, char **argv)
{
	int			i;
	t_square	bsq;
	t_map		m;
	char		*buffer;

	i = 1;
	if (argc == 1)
	{
		buffer = ft_read_stdin();
		if (!(buffer == NULL))
			ft_one_pass(buffer, &bsq);
	}
	while (i < argc)
	{
		if (ft_load_file(argv[i++], &buffer, BUF_SIZE) == -1)
			write(2, "map error\n", 10);
		else
		{
			ft_one_pass(buffer, &bsq);
			if (i != argc)
				ft_putchar('\n');
		}
	}
}
