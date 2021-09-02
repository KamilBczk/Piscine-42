/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <kbiczyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 17:29:42 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/09/02 17:41:40 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*pa;

	i = 0;
	while (s1[i] != '\0')
		i++;
	pa = malloc(sizeof(char) * i);
	if (pa == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		pa[i] = s1[i];
		i++;
	}
	pa[i] = '\0';
	return (pa);
}

#include <stdio.h>

int	main(void)
{
	char	x[] = "Bonjour";

	printf("%s\n", strdup(x));
	printf("%s", ft_strdup(x));
}
