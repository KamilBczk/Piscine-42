/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 18:26:45 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/08/16 18:26:46 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	
	return (*dest);
}

int	main(void)
{
	char	x[] = "Bonjour";
	char	y[] = "Ca va";

	printf("%s", ft_strlcat(x, y, 5));
}
