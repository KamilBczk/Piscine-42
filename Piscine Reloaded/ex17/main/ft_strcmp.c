/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urszulabiczyk <urszulabiczyk@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 20:43:40 by urszulabicz       #+#    #+#             */
/*   Updated: 2021/08/29 20:54:12 by urszulabicz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while(s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
        i++;
    return (s1[i] - s2[i]);
}

#include <stdio.h>

int main(void)
{
    char x[] = "abc";
    char y[] = "abcd";
    int result;

    result = ft_strcmp(x, y);
    printf("La différence entre :\n§%s§, §%s§\nEst de : %d", x, y, result);
}