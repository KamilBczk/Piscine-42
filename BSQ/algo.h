/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 20:15:12 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/08/25 20:15:13 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALGO_H
# define ALGO_H
# include	"map.h"
# include	"shapes.h"
int		ft_lobst_i(int *tab, int size, int col);
void	ft_expand(t_rect *rect, t_square *bsq);
void	ft_shrink(t_rect *rect, t_square *bsq, int lbound, int rbound);
void	ft_update_rects(t_rect *rects, t_square *bsq, int lbound, int rbound);
void	ft_bsq_crossovers(t_map map, t_square *bsq, int lcol, int rcol);
#endif
