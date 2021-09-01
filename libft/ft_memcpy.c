/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <kbiczyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 15:43:14 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/09/01 16:16:20 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	int		i;
	char	*pdst;
	char	*psrc;

	i = 0;
	pdst = (char *) dst;
	psrc = (char *) src;
	while (i != n)
	{
		pdst[i] = psrc[i];
		i++;
	}
	return (pdst);
}
