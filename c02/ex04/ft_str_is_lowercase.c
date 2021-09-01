/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 20:36:27 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/08/09 13:29:57 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
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
		if (str[i] >= 97 && str[i] <= 123)
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
