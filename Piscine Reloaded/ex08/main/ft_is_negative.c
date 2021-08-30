/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urszulabiczyk <urszulabiczyk@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 16:15:05 by urszulabicz       #+#    #+#             */
/*   Updated: 2021/08/29 18:23:31 by urszulabicz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_is_negative(int n)
{
    if(n >= 0)
        write(1, "P", 1);
    else
        write(1, "N", 1);
}

int main()
{
    int nombre;

    nombre = 15;
    ft_is_negative(nombre);
}