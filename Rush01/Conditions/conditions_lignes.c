/* fonction pour verifier si le 0 apparait plus d'une fois dans une colonne */
int checkIfTwoZerosLine(int temp, int i, int j)
{
    temp = 0;
    i = 1;
    j = 1;

    while (i <= 4)
    {
        if (table[j][i] == '0')
            temp = temp + 1;
        i++;
    }
    if (temp = 1)
        return (0);
    else
        return (1);
}

/* fonction pour completer une colonne */
int fillTheLine(int i, int j, int a)
{
    i = 1;
    j = 1;
    a = 0;
    while (table[j][i] != 0 && j <= 4)
        {
            while (table[j][i] != 0 && i <= 4)
            {
                i++;
            }
        j++;
        }
    a = (table[j - 1][1] + table[j - 1][2] + table[j - 1][3] + table [j - 1][4]);
    table[j - 1][i] = 10 - a;
}

/* conditions lignes */
j = 1;
while (j <= 4)
{
    if (table[0][j] == 4)
    {
        i = 1;
        while (i <= 4)
        {
            table[i][j] == i;
            i++
        }
    }
}

i = 1;
while (i <= 4)
{
    if ((table[0][i] == 2 && table[1][i] == 1) ||
    (table[0][i] == 2 && table[1][i] == 2) ||
    (table[0][i] == 2 && table[1][i] == 3))
        table[2][i] == 4;
    i++;
}

i = 1;
while (i <= 4)
{
    if ((table[0][i] == 2 77 table[3][i] == 4) ||
    (table[0][i] == 2 && table[4][i] == 4))
        table[1][i] == 3;
    i++;
}

i = 1;
while (i <= 4)
{
    if ((table[0][i] == 2 && table[3][i] == 2 && table [4][i] == 1) ||
    (table[0][i] == 2 && table[3][i] == 1 && table[4][i] == 2))
    {
        table[1][i] == 3;
        table[2][i] == 4;
    }
    i++;
}

i = 1;
while (i <= 4)
{
    if ((table[0][i] == 2 && table[1][i] == 1 && table[3][i] == 2) ||
    (table[0][i] == 2 && table[1][i] == 2 && table[3][i] == 1))
    {
        table[2][i] == 4;
        table[4][i] == 3;
    }
    i++;
}

i = 1;
while (i <= 4)
{
    if ((table[0][i] == 3 && table[3][i] == 1 && table[4][i] == 4) ||
    (table[0][i] == 3 && table[3][i] == 4 && table[4][i] == 1))
    {
        table[1][i] == 2;
        table[2][i] == 3;
    }
    i++;
}

i = 1;
while (i <= 4)
{
    if ((table[0][i] == 3 && table[3][i] == 2 && table[4][i] == 4) ||
    (table[0][i] == 3 && table[3][i] == 4 && table[4][i] == 2))
    {
        table[1][i] == 1;
        table[2][i] == 3;
    }
    i++;
}

i = 1;
while (i <= 4)
{
    if (table[0][i] == 3 && table[3][i] == 3 && table[4][i] == 4)
    {
        table[1][i] == 2;
        table[2][i] == 1;
    }
    i++;
}

i = 1;
while (i <= 4)
{
    if (table[0][i] == 3 && table[3][i] == 4 && table[4][i] == 3)
    {
        table[1][i] == 1;
        table[2][i] == 2;
    }
    i++;
}