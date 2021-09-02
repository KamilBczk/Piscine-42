/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <kbiczyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 20:03:07 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/09/01 20:20:48 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*pa;

	pa = s;
	while ((*pa != '\0') && (n - 1 != 0) && (*pa != c))
	{
		pa++;
		n--;
	}
	if ((*pa != '\0') && (*pa == c))
		return ((char *)pa);
	return (NULL);
}

#include <stdio.h>

int	main(void)
{
	char 	x[] = "BonjourAAA";
	int		c;
	int		n;

	c = 'j';
	n = 4;
	printf("%s\n", memchr(x, c, n));
	printf("%s\n", ft_memchr(x, c, n));

}
