#include "function.h"
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

enum Errors { UnExpToken = 1, ExpBracket, ExpDouble, ExpCircle };

int check_circle(char* search, int m_string)
{
    char check_str[] = {'c', 'i', 'r', 'c', 'l', 'e', '('};
    int i, g, j;

    // check circle
    for (i = 0; i < 7; ++i) {
        if (tolower(search[i]) != check_str[i]) {
            return ExpCircle;
        }
    }

    // check for anything after ')'
    for (i = 0; i < m_string; i++) {
        if (search[i] == ')') {
            if (search[i + 1] == '\0') {
                return 0;
            } else {
                return UnExpToken;
            }
        }
    }

    // check ')'
    for (i = 0; i < m_string; i++) {
        if (search[i] == '\0') {
            if (search[i - 1] == ')') {
                return 0;
            } else {
                return ExpBracket;
            }
        }
    }

    // check x coord
    for (i = 0; i < m_string; i++) {
        if (search[i] == '(') {
            for (g = i; search[g + 1] != ' '; g++) {
                if (((search[g + 1] <= '9') && (search[g + 1] >= '0'))
                    || (search[g + 1] == '.')) {
                    return 0;
                } else {
                    return ExpDouble;
                }
            }
        }
    }

    // check y coord
    for (i = 0; i < m_string; i++) {
        if (search[i] == ' ') {
            for (j = i; j < m_string; j++) {
                if (search[j] == ',') {
                    for (g = i; search[g + 1] != ','; g++) {
                        if (((search[g + 1] <= '9') && (search[g + 1] >= '0'))
                            || (search[g + 1] == '.')) {
                            return 0;
                        } else {
                            return ExpDouble;
                        }
                    }
                }
            }
        }
    }

    // check radius
    for (i = 0; i < m_string; i++) {
        if ((search[i] == ',') && (search[i + 1] == ' ')) {
            for (g = (i + 1); search[g + 1] != ')'; g++) {
                if (((search[g + 1] <= '9') && (search[g + 1] >= '0'))
                    || (search[g + 1] == '.')) {
                    return 0;
                } else {
                    return ExpDouble;
                }
            }
        }
    }
    return 0;
}
