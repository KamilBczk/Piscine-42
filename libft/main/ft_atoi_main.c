/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <kbiczyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 16:25:59 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/09/02 16:58:58 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	signe;
	int	nb;

	signe = 1;
	nb = 0;
	while ((*str == 32) || (*str >= 9 && *str <= 13))
		str++;
	if (*str == 43 || *str == 45 || (*str >= 48 && *str <= 57))
	{
		if (*str == 45)
			signe = -1;
	}
	else
		return (0);
	if (!(*str >= 48 && *str <= 57))
		str++;
	while (*str >= 48 && *str <= 57 && *str != '\0')
		nb = nb * 10 + (*str++ - '0');
	return (signe * nb);
}

#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	char x[] = "   -123456    5";

	printf("%d\n", atoi(x));
	printf("%d", ft_atoi(x));
}
