/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 12:46:36 by najacque          #+#    #+#             */
/*   Updated: 2021/08/24 12:48:15 by najacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include <unistd.h>
#include "algo.h"

int	ft_max(int a, int b)
{
	if (a < b)
		return (b);
	else
		return (a);
}

int	ft_min(int a, int b)
{
	if (a > b)
		return (b);
	else
		return (a);
}

void	ft_putchar(char z)
{
	write(1, &z, 1);
}

void	ft_find_bsq(t_map map, t_square *bsq, int lcol, int rcol)
{
	int	midcol;

	midcol = (lcol + rcol) / 2;
	ft_bsq_crossovers(map, bsq, lcol, rcol);
	if ((midcol - lcol + 1) >= bsq->side)
		ft_find_bsq(map, bsq, lcol, midcol - 1);
	if ((rcol - midcol + 1) >= bsq->side)
		ft_find_bsq(map, bsq, midcol + 1, rcol);
}
