/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 12:45:13 by najacque          #+#    #+#             */
/*   Updated: 2021/08/24 12:48:32 by najacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H
# include "shapes.h"
# include "map.h"

int		ft_max(int a, int b);
int		ft_min(int a, int b);
void	ft_putchar(char z);
void	ft_find_bsq(t_map map, t_square *bsq, int lcol, int rcol);

#endif
