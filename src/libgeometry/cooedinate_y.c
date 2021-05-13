#include "function.h"
#include <stdio.h>
#include <stdlib.h>

float coordinate_y(char* search, int m_string){
    int i,j;
    char find_y[m_string];
    float y;
    for (i = 0; i < m_string; i++) {
        find_y[i] = '\0';
    }
    for (i = 0; i < m_string; i++) {
        if ((search[i] == ' ') && (search[i-1] != ',')) {
            for (j = i; search[j + 1] != ','; j++) {
                find_y[j-1] = search[j+1];
            }
        }
    }
    y = atof(find_y);
    return y;
}
