/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <kbiczyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 19:15:17 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/09/01 19:26:44 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	x;

	x = 122;
	printf("%d\n", toupper(x));
	printf("%d", ft_toupper(x));
}
