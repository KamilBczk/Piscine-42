/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urszulabiczyk <urszulabiczyk@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 18:36:55 by urszulabicz       #+#    #+#             */
/*   Updated: 2021/08/29 18:52:35 by urszulabicz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
    int result;

    result = 1;
    if(nb < 0)
        return (0);
    else if (nb < 2)
        return (1);
    while(nb != 1)
    {
        result *= nb--;
    }
    return (result);
}

#include <stdio.h>

int main(void)
{
    int nombre;
    int resultat;

    nombre = 5;
    resultat = ft_iterative_factorial(nombre);
    printf("La fonction a renvoyée : %d.", resultat);
}
