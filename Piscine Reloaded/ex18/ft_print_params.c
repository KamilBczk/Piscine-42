/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urszulabiczyk <urszulabiczyk@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 20:57:18 by urszulabicz       #+#    #+#             */
/*   Updated: 2021/08/29 21:07:22 by urszulabicz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char z)
{
    write(1, &z, 1);
}

void    ft_putstr(char *str)
{
    int i;
    
    i = 0;
    while(str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
}

int main(int argc, char **argv)
{
    int i;

    i = 1;
    while (argc != i)
    {
        ft_putstr(argv[i]);
        ft_putchar('\n');
        i++;
    }
    
    
}