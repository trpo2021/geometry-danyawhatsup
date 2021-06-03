#include "function.h"
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void p_and_a(char* search, int m_string)
{
    int i, j;
    char rad[m_string];
    float perimeter, area, r;
    r = 0;

    for (i = 0; i < m_string; i++)
    {
        if ((search[i] == ',') && (search[i + 1] == ' '))
        {
            for (j = i; search[j + 1] != ')'; j++)
            {
                rad[j - i] = search[j + 1];
            }
        }
    }
    r = atof(rad);
    area = M_PI * r * r;
    perimeter = 2 * M_PI * r;
    printf("\n perimeter = %.4f\n area = %.4f\n", perimeter, area);
}
