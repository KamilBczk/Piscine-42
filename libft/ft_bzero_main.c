/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <kbiczyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 14:34:00 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/09/01 15:42:01 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <string.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

int	main(void)
{
	char x[] = "abcdefg";
	char y[] = "abcdefg";
	
	bzero(x, 2);
	printf("a%c\n", x[2]);
	ft_bzero(y, 2);
	printf("a%c", y[2]);
}
