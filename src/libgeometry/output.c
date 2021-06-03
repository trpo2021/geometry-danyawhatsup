#include "function.h"
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void output(char* search, int m_string)
{
    for (int i = 0; i < m_string; i++) {
        search[i] = tolower(search[i]);
    }
    printf("\n%s", search);
}
