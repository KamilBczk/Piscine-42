/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   autoFill.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 19:16:53 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/08/15 19:16:54 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    autoFillColumn2(int table[6][6], int x)
{
    int y;
    int result;
    int yaRemplacer;
    
    result = 0;
    y = 1;
    while(y != 5)
    {
        result += table[y][x];
        if(table[y][x] == 0)
            yaRemplacer = y;
        y++;
    }
    table[yaRemplacer][x] = 10 - result;
    yaRemplacer = 0;
    result = 0;
}

void    autoFillColumn(int table[6][6])
{
    int x;
    int y;
    int value;
    
    value = 0;
    x = 1;
    while(x != 5)
    {
        y = 1;
        while(y != 5)
        {
            if(table[y][x] == 0)
                value++;
            y++;
        }
        if(value == 1)
            autoFillColumn2(table, x);
        value = 0;
        x++;
    }
}

void    autoFillRow2(int table[6][6], int y)
{
    int x;
    int result;
    int xaRemplacer;
    
    result = 0;
    x = 1;
    while(x != 5)
    {
        result += table[y][x];
        if(table[y][x] == 0)
            xaRemplacer = x;
        x++;
    }
    table[y][xaRemplacer] = 10 - result;
    xaRemplacer = 0;
    result = 0;
    y++;
}

void    autoFillRow(int table[6][6])
{
    int x;
    int y;
    int value;
    
    value = 0;
    y = 1;
    while(y != 5)
    {
        x = 1;
        while(x != 5)
        {
            if(table[y][x] == 0)
                value++;
            x++;
        }
        if(value == 1)
        {
            autoFillRow2(table, y);
        }
        value = 0;
        y++;
    }
    autoFillColumn(table);
}
