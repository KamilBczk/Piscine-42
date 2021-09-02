/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <kbiczyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 17:05:12 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/09/02 17:29:03 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*pa;

	pa = malloc(count * size);
	if (pa == NULL)
		return (NULL);
	ft_bzero(pa, count);
	return (pa);
}

#include <stdio.h>

int	main(void)
{
	char	*x = ft_calloc(5, 4);

	printf(">>|%c|", x[5]);
}
