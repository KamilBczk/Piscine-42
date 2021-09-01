/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 11:00:03 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/08/16 11:00:04 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_program_name(char *z)
{
	int	i;

	i = 0;
	while (z[i] != '\0')
	{
		write(1, &z[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		return (0);
	while (argc - 1 != 0)
	{
		ft_print_program_name(argv[argc - 1]);
		argc--;
	}
}
