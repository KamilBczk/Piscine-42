/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 19:54:43 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/08/09 13:29:08 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	troll;

	troll = 1;
	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
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
