/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 21:07:57 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/08/09 13:30:35 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	troll;

	i = 0;
	troll = 1;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
		}
		else
			troll = 0;
		i++;
	}
	if (troll == 1)
		return (1);
	else
		return (0);
}
