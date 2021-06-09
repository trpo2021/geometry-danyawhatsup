#include "function.h"
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int crossing(char* search1, char* search2, int m_string)
{
    int i, g, j;

    char rad1[m_string];
    char rad2[m_string];
    char x1[m_string];
    char y1[m_string];
    char x2[m_string];
    char y2[m_string];

    float r1, r2, xx1, xx2, yy1, yy2, dist;

    r1 = 0;
    r2 = 0;

    // radius 1
    for (i = 0; i < m_string; i++) {
        if ((search1[i] == ',') && (search1[i + 1] == ' ')) {
            for (g = i; search1[g + 1] != ')'; g++) {
                rad1[g - i] = search1[g + 1];
            }
        }
    }
    r1 = atof(rad1);

    // radius 2
    for (i = 0; i < m_string; i++) {
        if ((search2[i] == ',') && (search2[i + 1] == ' ')) {
            for (g = i; search2[g + 1] != ')'; g++) {
                rad2[g - i] = search2[g + 1];
            }
        }
    }
    r2 = atof(rad2);

    // x1
    for (i = 0; i < m_string; i++) {
        if (search1[i] == '(') {
            for (g = i; search1[g + 1] != ' '; g++) {
                x1[g - i] = search1[g + 1];
            }
        }
    }
    xx1 = atof(x1);

    // x2
    for (i = 0; i < m_string; i++) {
        if (search2[i] == '(') {
            for (g = i; search2[g + 1] != ' '; g++) {
                x2[g - i] = search2[g + 1];
            }
        }
    }
    xx2 = atof(x2);

    // y1
    for (i = 0; i < m_string; i++) {
        if (search1[i] == ' ') {
            for (j = i; j < m_string; j++) {
                if (search1[j] == ',') {
                    for (g = i; search1[g + 1] != ','; g++) {
                        y1[g - i] = search1[g + 1];
                    }
                }
            }
        }
    }
    yy1 = atof(y1);

    // y2
    for (i = 0; i < m_string; i++) {
        if (search2[i] == ' ') {
            for (j = i; j < m_string; j++) {
                if (search2[j] == ',') {
                    for (g = i; search2[g + 1] != ','; g++) {
                        y1[g - i] = search2[g + 1];
                    }
                }
            }
        }
    }
    yy2 = atof(y2);

    dist = sqrt((xx2 - xx1) * (xx2 - xx1) + (yy2 - yy1) * (yy2 - yy1));

    if (dist <= (r1 + r2)) {
        return 1;
    } else
        return 0;
}
