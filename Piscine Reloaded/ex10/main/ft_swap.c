/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urszulabiczyk <urszulabiczyk@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 16:27:13 by urszulabicz       #+#    #+#             */
/*   Updated: 2021/08/29 18:33:17 by urszulabicz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

#include <stdio.h>

int main(void)
{
    int x;
    int y;

    x = 10;
    y = 25;
    printf("Avant le swap, x : %d, y : %d\n", x, y);
    ft_swap(&x, &y);
    printf("Après le swap, x : %d, y : %d\n", x, y);
}
