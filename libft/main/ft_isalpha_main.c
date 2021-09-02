/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <kbiczyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 11:12:51 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/09/01 11:33:28 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int s)
{
	if ((s >= 65 && s <= 90) || (s >= 97 && s <= 122))
		return (1);
	return (0);
}

int	main(void)
{
	int	x;

	x = 'h';
	printf("%d\n", ft_isalpha(x));
	printf("%d", isalpha(x));
}
