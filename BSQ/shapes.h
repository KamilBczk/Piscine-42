/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shapes.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 12:28:56 by najacque          #+#    #+#             */
/*   Updated: 2021/08/24 16:51:11 by najacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHAPES_H
# define SHAPES_H

typedef struct s_square
{
	int	x;
	int	y;
	int	side;
}	t_square;

typedef struct s_rect
{
	int	x;
	int	y;
	int	width;
	int	height;
}	t_rect;

/*compare accord to subject's rules. sq1 < sq2 -> -1 */
int			ft_square_cmp(t_square sq1, t_square sq2);

/*reset attributes of existing square dest TODO consistetn w re_rect */
void		ft_set_square(t_square *dest, int x, int y, int new_side);

/* returns biggest sqaure according to square_cmp */
t_square	ft_sqmax(t_square sq1, t_square sq2);

/* rect x, y, w, h -> sq x, y, w */
t_square	ft_sqofrect(t_rect r);

t_rect		ft_mk_rect(int x, int y, int width, int height);
#endif
