#include "function.h"
#include <stdio.h>
#include <stdlib.h>

float coordinate_x(char* search, int m_string){
    int i, j;
    char find_x[m_string];
    float x;
    for (i = 0; i < m_string; i++) {
        find_x[i] = '\0';
    }
    for (i = 0; i < m_string; i++) {
        if (search[i] == '(') {
            for (j = i; search[j+1] != ' '; j++) {
                find_x[j-1] = search[j+1];
            }
        }
    }
    x = atof(find_x);
    return x;
}
