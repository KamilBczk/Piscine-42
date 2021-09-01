/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_map.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 20:16:38 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/08/25 20:16:50 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MAKE_MAP_H
# define FT_MAKE_MAP_H
# include "map.h"
int		ft_count_obst(char *map, char *car);
int		*ft_map_to_struct(char *map, char *car);
t_map	ft_mk_map(char *strmap);
#endif