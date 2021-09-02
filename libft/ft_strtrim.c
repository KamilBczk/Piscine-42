/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <kbiczyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 20:24:45 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/09/02 21:12:42 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	pos;
	int	gate;

	i = 0;
	pos = 1;
	gate = 1;
	while (*s1 != '\0')
	{
		if (gate == 1 && pos == 1)
			pos = 0;
		else
		{
			pos = 1;
			gate = 0;
		}
		while (set[i] != '\0')
		{
			printf("\n%c ; %c", *s1, set[i]);
			if (*s1 == set[i] && pos == 0)
			{
				pos = 1;
				printf(" YES");
			}
			i++;
		}
		i = 0;
		s1++;
	}
	return (0);
}

int	main(void)
{
	char x[] = "Bonjour   ";
	char y[] = "onBj";

	ft_strtrim(x,y);
}
