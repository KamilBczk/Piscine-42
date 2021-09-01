/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shapes.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 12:29:00 by najacque          #+#    #+#             */
/*   Updated: 2021/08/24 16:55:38 by najacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shapes.h"
#include "utils.h"

int	ft_square_cmp(t_square sq1, t_square sq2)
{
	if (sq1.side != sq2.side)
		return (sq1.side - sq2.side);
	if (sq1.y != sq2.y)
		return (sq2.y - sq1.y);
	if (sq1.x != sq2.x)
		return (sq2.x - sq1.x);
	return (0);
}

void	ft_set_square(t_square *dest, int x, int y, int side)
{
	dest->x = x;
	dest->y = y;
	dest->side = side;
}

t_square	ft_sqmax(t_square sq1, t_square sq2)
{
	if (ft_square_cmp(sq1, sq2) < 0)
		return (sq2);
	else
		return (sq1);
}

t_square	ft_sqofrect(t_rect r)
{
	t_square	result;

	result.x = r.x;
	result.y = r.y;
	result.side = ft_min(r.width, r.height);
	return (result);
}

t_rect	ft_mk_rect(int x, int y, int width, int height)
{
	t_rect	dest;

	dest.x = x;
	dest.y = y;
	dest.width = width;
	dest.height = height;
	return (dest);
}
