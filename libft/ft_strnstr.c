/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <kbiczyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 15:22:12 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/09/02 16:24:56 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while ((haystack[i] != '\0') && (len-- != 0))
	{
		if (haystack[i] == needle[j])
			j++;
		else
			j = 0;
		if (needle[j] == '\0')
			return ((char *)haystack + i - j + 1);
		i++;
	}
	return (0);
}
