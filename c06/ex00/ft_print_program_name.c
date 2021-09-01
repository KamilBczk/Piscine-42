/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 10:11:08 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/08/16 10:11:10 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print_program_name(char *z)
{
	int	i;

	i = 0;
	while (z[i] != '\0')
	{
		write(1, &z[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	(void) argc;
	ft_print_program_name(argv[0]);
	write(1, "\n", 1);
}
