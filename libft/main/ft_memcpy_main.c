/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <kbiczyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 15:43:14 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/09/01 16:16:09 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

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

int	main(void)
{
	char src[] = "Kamil123456";
	char dest[] = "dsbjasbdaksbdasjk";
	ft_memcpy(dest, src, 8);
	printf("%s", dest);
}
