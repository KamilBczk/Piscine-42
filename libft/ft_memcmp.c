/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <kbiczyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 20:22:09 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/09/01 20:34:20 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*ps1;
	const char	*ps2;

	ps1 = s1;
	ps2 = s2;
	while ((*ps1 != '\0') && (*ps2 != '\0') && (n - 1 != 0) && (*ps1 == *ps2))
	{
		ps1++;
		ps2++;
		n--;
	}
	if ((ps1 != '\0') && (ps1 != ps2))
		return (*ps1 - *ps2);
	return (0);
}
