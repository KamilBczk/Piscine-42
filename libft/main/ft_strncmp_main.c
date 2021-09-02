/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <kbiczyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 19:49:51 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/09/01 19:58:26 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while ((*s1 != '\0') && (*s2 != '\0') && (n - 1 != 0) && (*s1 == *s2))
	{
		s1++;
		s2++;
		n--;
	}
	return (*s1 - *s2);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	int nb_of_times;
	char x[] = "abc";
	char y[] = "abcd";

	nb_of_times = 4;
	printf("%d\n", strncmp(x, y, nb_of_times));
	printf("%d", ft_strncmp(x, y, nb_of_times));
}
