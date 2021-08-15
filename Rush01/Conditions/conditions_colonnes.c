
/* fonction pour verifier si le 0 apparait plus d'une fois dans une colonne */
/*
int checkIfTwoZerosColumn(int temp, int i, int j)
{
    temp = 0;
    i = 1;
    j = 1;

    while (j <= 4)
    {
        if (table[j][i] == '0')
            temp = temp + 1;
        j++;
    }
    if (temp = 1)
        return (0);
    else
        return (1);
}

/* fonction pour completer une colonne *//*
int fillTheColumn(int i, int j, int a)
{
    i = 1;
    j = 1;
    a = 0;
    while (table[j][i] != 0 && i <= 4)
        {
            while (table[j][i] != 0 && j <= 4)
            {
                j++;
            }
        i++;
        }
    a = table[1][i - 1] + table[2][i - 1] + table[3][i - 1] + table [4][i - 1];
    table[j][i - 1] = 10 - a;
}
*/        

/* conditions pour les colonnes - attention aux variables non declarees */

j = 1;
while (j <= 4)
{
    if ((table[j][0] == 2 && table[j][1] == 1) ||
    (table[j][0] == 2 && table[j][1] == 2) ||
    (table[j][0] == 2 && table[j][1] == 3))
        table[j][2] == 4;
    j++;
}

j = 1;
while (j <= 4)
{
    if ((table[j][0] == 2 && table[j][3] == 4) ||
    (table[j][0] == 2 && table[j][4] == 4))
        table[j][1] == 3;
    j++;
}

j = 1;
while (j <= 4)
{
    if ((table[j][0] == 2 && table[j][3] == 2 && table [j][4] == 1) ||
    (table[j][0] == 2 && table[j][3] == 1 && table[j][4] == 2))
    {
        table[j][1] == 3;
        table[j][2] == 4;
    }
    j++;
}

j = 1;
while (j <= 4)
{
    if ((table[j][0] == 2 && table[j][1] == 1 && table[j][3] == 2) ||
    (table[j][0] == 2 && table[j][1] == 2 && table[j][3] == 1))
    {
        table[j][2] == 4;
        table[j][4] == 3;
    }
    j++;
}

j = 1;
while (j <= 4)
{
    if ((table[j][0] == 3 && table[j][3] == 1 && table[j][4] == 4) ||
    (table[j][0] == 3 && table[j][3] == 4 && table[j][4] == 1))
    {
        table[j][1] == 2;
        table[j][2] == 3;
    }
    j++;
}

j = 1;
while (j <= 4)
{
    if ((table[j][0] == 3 && table[j][3] == 2 && table[j][4] == 4) ||
    (table[j][0] == 3 && table[j][3] == 4 && table[j][4] == 2))
    {
        table[j][1] == 1;
        table[j][2] == 3;
    }
    j++;
}

j = 1;
while (j <= 4)
{
    if (table[j][0] == 3 && table[j][3] == 3 && table[j][4] == 4)
    {
        table[j][1] == 2;
        table[j][2] == 1;
    }
    j++;
}

j = 1;
while (j <= 4)
{
    if (table[j][0] == 3 && table[j][3] == 4 && table[j][4] == 3)
    {
        table[j][1] == 1;
        table[j][2] == 2;
    }
    j++;
}
*/