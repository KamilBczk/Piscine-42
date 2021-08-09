/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 08:21:07 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/08/08 17:33:32 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char z );

void	slash(int a, int b, int c, int d)
{
	if (a == c && b == d)
	{
		ft_putchar('/');
	}
	else if ((a == 1 && b == d) || (a == c && b == 1))
	{
		ft_putchar('\\');
	}
	else if (a == 1 && b == 1)
	{
		ft_putchar('/');
	}
	else if ((a != 1 && b != 1) && (a != c && b != d))
	{
		ft_putchar(' ');
	}
	else
	{
		ft_putchar('*');
	}
}

void	rush(int x, int y)
{
	int	cords[2];

	cords[0] = y;
	while (cords[0] > 0)
	{
		cords[1] = x;
		while (cords[1] > 0)
		{
			slash(cords[0], cords[1], y, x);
			cords[1]--;
		}
		if (x > 0 && y > 0)
		{
			ft_putchar('\n');
		}
		cords[0]--;
	}
}
