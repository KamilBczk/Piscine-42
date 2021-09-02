/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <kbiczyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 18:04:23 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/09/02 20:12:35 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	int		f;
	int		j;
	char	*pa;

	i = 0;
	f = start;
	j = 0;
	while ((i < len) && (s[start++] != '\0'))
		i++;
	pa = malloc(sizeof(char) * (i + 1));
	if (pa == NULL)
		return (NULL);
	while (i > 0)
	{
		pa[j++] = s[f++];
		i--;
	}
	pa[j] = '\0';
	return (pa);
}

#include <stdio.h>

int	main(void)
{
	char x[] = "Bonjour Kamil";
	
	printf("%s", ft_substr(x, 1, 3));
}
