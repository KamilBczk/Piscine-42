/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <kbiczyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 13:52:10 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/09/01 14:32:52 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*x;

	i = 0;
	x = b;
	while (i != len)
	{
		x[i] = c;
		i++;
	}
	return (x);
}

int	main(void)
{
	char	x[] = "123456";

	memset(&x, 'a', 3);
	printf("%s\n", x);
	ft_memset(&x, 'b', 3);
	printf("%s", x);
}
