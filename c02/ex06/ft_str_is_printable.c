/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 09:11:56 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/08/09 13:30:57 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
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
		if (str[i] >= 31 && str[i] <= 126)
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
