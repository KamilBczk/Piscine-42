/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urszulabiczyk <urszulabiczyk@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 16:34:28 by urszulabicz       #+#    #+#             */
/*   Updated: 2021/08/29 18:35:22 by urszulabicz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a/b;
    *mod = a%b;
}

#include <stdio.h>

int main(void)
{
    int x;
    int y;
    int div;
    int mod;
    
    x = 10;
    y = 5;
    ft_div_mod(x,y,&div,&mod);
    printf("%d/%d = %d reste %d", x, y, div, mod);
}
