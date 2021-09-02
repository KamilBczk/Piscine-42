/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <kbiczyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 19:23:01 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/09/01 19:26:12 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	x;

	x = '[';
	printf("%d\n", tolower(x));
	printf("%d", ft_tolower(x));
}
