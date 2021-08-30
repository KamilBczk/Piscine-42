/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urszulabiczyk <urszulabiczyk@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 20:37:25 by urszulabicz       #+#    #+#             */
/*   Updated: 2021/08/29 20:42:11 by urszulabicz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
        i++;
    return (i);
}

#include <stdio.h>

int main(void)
{
    char x[] = "Hello World!";
    int resultat;

    resultat = ft_strlen(x);
    printf("La chaîne de caractère :\n%s\nContient %d caractères.", x, resultat);
}