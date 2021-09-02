/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <kbiczyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 20:13:33 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/09/02 20:23:59 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *z)
{
	int	i;

	i = 0;
	while (*z != '\0')
	{
		i++;
		z++;
	}
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		s1len;
	int		s2len;
	char	*pa;

	i = 0;
	s1len = ft_strlen((char *)s1);
	s2len = ft_strlen((char *)s2);
	pa = malloc(sizeof(char) * (s1len + s2len + 1));
	while (*s1 != '\0')
	{
		pa[i++] = *s1;
		s1++;
	}
	while (*s2 != '\0')
	{
		pa[i++] = *s2;
		s2++;
	}
	pa[i] = '\0';
	return (pa);
}

#include <stdio.h>

int	main(void)
{
	char x[] = "Bonjour";
	char y[] = " Kamil";

	printf("%s", ft_strjoin(x, y));
}
