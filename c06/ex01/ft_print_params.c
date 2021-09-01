/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 10:51:28 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/08/16 10:51:29 by kbiczyk          ###   ########.fr       */
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
	int	i;

	i = 1;
	if (argc == 1)
		return (0);
	while (argc - 1 != 0)
	{
		ft_print_program_name(argv[i]);
		i++;
		argc--;
	}
}
