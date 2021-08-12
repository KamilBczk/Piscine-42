/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 17:44:28 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/08/12 21:41:20 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char z)
{
    write(1, &z, 1);
}

void rot_13(char *x)
{
    int i;
    
    i = 0;
    while (x[i] != '\0')
    {
        if((x[i] >= 65 && x[i] <= 78) || (x[i] >= 97 && x[i] <= 109))
        {
            x[i] += 13;
        }
        else if((x[i] >= 77 && x[i] <= 90) || (x[i] >= 110 && x[i] <= 122))
        {
            x[i] -= 13;
        }
        ft_putchar(x[i]);
        i++;
    }
}

int main(int argc, char **argv)
{
	if (argc == 2)
    	rot_13(argv[1]);
	ft_putchar('\n');
	return (0);
}
