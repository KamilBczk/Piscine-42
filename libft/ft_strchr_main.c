/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <kbiczyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 19:29:01 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/09/01 19:48:05 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && *s != c)
		s++;
	if (!(*s == '\0'))
		return ((char *) s);
	return (NULL);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	x[] = "Bonjour ooo";
	char	to_find;

	to_find = 'o';
	printf("%s\n", strchr(x, to_find));
	printf("%s", ft_strchr(x, to_find));
}
