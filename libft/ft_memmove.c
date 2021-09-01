/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <kbiczyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 16:17:51 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/09/01 18:49:43 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int			i;
	int			lensrc;
	char		*pdst;
	const char	*psrc;

	i = -1;
	pdst = dst;
	psrc = src;
	lensrc = ft_strlen(psrc);
	if (len > lensrc)
	{
		while (psrc[++i] != '\0')
			pdst[i] = psrc[i];
		pdst[i] = '\0';
	}
	else
		while (psrc[++i] != '\0' && len-- != 0)
			pdst[i] = psrc[i];
	return (pdst);
}
