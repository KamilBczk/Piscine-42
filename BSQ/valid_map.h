/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_map.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 15:25:29 by najacque          #+#    #+#             */
/*   Updated: 2021/08/25 16:46:31 by najacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VALID_MAP_H
# define VALID_MAP_H

/* len of first line */
int		ft_line_len(char *str);

/* return a pointer to beginning of next line
NULL if does not exsit */
char	*ft_seek_next_line(char *strmap);

/* extract info from the first line of map
 * and loads into height and md
 * returns -1 if error parsing 0 otherwise */
int		ft_get_info(char *map, int *height, char *md);

/* check if the first line pointed by mappos is valid */
int		ft_check_line(char *mappos, char *info);

/* check if map is valid */
int		ft_check_map(char *map, int *height, int *width, char *info);

#endif
