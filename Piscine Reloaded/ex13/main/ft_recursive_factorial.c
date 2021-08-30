/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urszulabiczyk <urszulabiczyk@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 20:00:28 by urszulabicz       #+#    #+#             */
/*   Updated: 2021/08/29 20:11:48 by urszulabicz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
    int result;

    result = 1;
    if(nb < 0)
        return (0);
    else if (nb < 2)
        return (1);
    return (nb * ft_recursive_factorial(nb - 1));
}

#include <stdio.h>

int main()
{
    int nombre;
    int resultat;

    nombre = 4;
    resultat = ft_recursive_factorial(nombre);
    printf("La fonction a renvoyée : %d.", resultat);
}