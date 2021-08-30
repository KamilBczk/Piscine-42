/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urszulabiczyk <urszulabiczyk@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 16:20:05 by urszulabicz       #+#    #+#             */
/*   Updated: 2021/08/29 18:29:40 by urszulabicz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_ft(int *nbr)
{
    *nbr = 42;
}

#include <stdio.h>

int main()
{
    int nombre;

    nombre = 5;
    printf("Nombre avant l'appel de la fonction : %d.\n", nombre);
    ft_ft(&nombre);
    printf("Nombre après l'appel de la fonction : %d.\n", nombre);
}