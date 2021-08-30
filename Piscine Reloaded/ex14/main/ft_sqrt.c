/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urszulabiczyk <urszulabiczyk@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 20:14:48 by urszulabicz       #+#    #+#             */
/*   Updated: 2021/08/29 20:26:23 by urszulabicz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_sqrt(int nb)
{
    int i;

    i = 0;
    while((i*i) < nb)
        i++;
    if ((i*i) == nb)
        return (i);
    return (0);
}

#include <stdio.h>

int main(void)
{
    int nombre;
    int resultat;

    nombre = 16;
    resultat = ft_sqrt(nombre);
    printf("La fonction a renvoyée : %d.", resultat);
}