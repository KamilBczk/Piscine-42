/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 19:56:58 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/08/25 19:56:59 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <fcntl.h>
#include "algo.h"
#include "utils.h"

int	ft_lobst_i(int *tab, int size, int col)
{
	int	upper_bound;
	int	lower_bound;
	int	mid;

	upper_bound = size - 1;
	lower_bound = 0;
	mid = (lower_bound + upper_bound) / 2;
	while (!(tab[mid] <= col && col < tab[mid + 1]))
	{
		if (col < tab[mid])
			upper_bound = mid;
		if (col >= tab[mid + 1])
			lower_bound = mid;
		mid = (lower_bound + upper_bound) / 2;
	}
	return (mid);
}

void	ft_expand(t_rect *rect, t_square *bsq)
{
	rect->height++;
	if (rect->height == rect->width)
	{
		*bsq = ft_sqmax(*bsq, ft_sqofrect(*rect));
		rect->width = 0;
	}
}

void	ft_shrink(t_rect *rect, t_square *bsq, int lbound, int rbound)
{
	int	rx;

	rx = ft_min(rbound - 1, rect->x + rect->width - 1);
	*bsq = ft_sqmax(*bsq, ft_sqofrect(*rect));
	rect->x = ft_max(lbound + 1, rect->x);
	rect->width = rx - rect->x + 1;
}

void	ft_update_rects(t_rect *rects, t_square *bsq, int lbound, int rbound)
{
	int	i;

	i = 0;
	while (rects[i].width > -1)
	{
		if (rects[i].width >= bsq->side)
		{
			if (lbound < rects[i].x && rects[i].x + rects[i].width - 1 < rbound)
				ft_expand(&rects[i], bsq);
			else
			{
				ft_shrink(&rects[i], bsq, lbound, rbound);
				ft_expand(&rects[i], bsq);
			}
		}
		++i;
	}
	rects[i] = ft_mk_rect(lbound + 1, i, rbound - lbound - 1, 1);
	rects[i + 1].width = -1;
}

void	ft_bsq_crossovers(t_map map, t_square *bsq, int lc, int rc)
{
	t_rect	*rects;
	int		row;
	int		loi;
	int		lbound;
	int		rbound;

	rects = malloc(map.height * sizeof(t_rect) + 1);
	if (rects == NULL)
		return ;
	rects[0].width = -1;
	row = 0;
	while (row < map.height)
	{
		loi = ft_lobst_i(map.obsts[row] + 1, map.obsts[row][0], (lc + rc) / 2);
		lbound = ft_max(lc - 1, map.obsts[row][loi + 1]);
		rbound = ft_min(rc + 1, map.obsts[row][loi + 2]);
		ft_update_rects(rects, bsq, lbound, rbound);
		++row;
	}
	*bsq = ft_sqmax(*bsq, ft_sqofrect(rects[map.height - 1]));
	free(rects);
}
