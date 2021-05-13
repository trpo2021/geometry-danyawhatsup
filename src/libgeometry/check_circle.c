#include "function.h"
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void check_circle(char* search, int m_string)
{
    char check_string[] = {'c', 'i', 'r', 'c', 'l', 'e', '('};
    int is_true = 0;
    int i, j, n, g;
    //char x, y, r;
    
    //правильность написания + ргеистр
    for (i = 0; i < 7; ++i) {
        if (tolower(search[i]) != check_string[i]) {
            is_true = 1;
        }
    }
        if (is_true != 0) {
            printf("\nError: expected 'circle': ");
            exit(0);
        }
    //проверка на символы после ')'
    for (i = 0; i < m_string; i++)
        {
            if (search[i] == ')')
            {
                if (search[i+1] == '\0'){
                }
                else{
                    for (j = 0; j != (i+1); j++)
                    {
                        printf(" ");
                    }
                    printf("\nError: after thr parentheses, nothing was expected");
                    exit(0);
                }
            }
        }
    
    //переход на первое значение в скобках, то есть на занчение 'x'
    for (i = 0; i < m_string; i++)
    {
        if (search[i] == '(')
        {
            for (j = i; search[j+1] != ' '; j++)
            {
                if (((search[j+1]<='9') && (search[j+1]>='1')) || (search[j+1] =='.')) {
                }
                else{
                    for (n = 0; n != (j+1); n++)
                    {
                        printf(" ");
                    }
                    printf("\nError: expected x '<double>'");
                    exit(0);
                }
            }
        }
    }
    
    //переход на значение 'y'
    for (i = 0; i < m_string; i++)
        {
            if (search[i] == ' ')
            {
                for (g = i; g < m_string; g++)
                {
                    if (search[g] == ',')
                    {
                        for (j = i; search[j + 1] != ','; j++)
                        {
                            if (((search[j+1]<='9') && (search[j+1]>='1')) || (search[j+1] =='.')){
                            }
                            else
                            {
                                for (n = 0; n != (j+1); n++){
                                    printf(" ");
                                }
                                printf("\nError: expected y '<double>'");
                        
                                exit(0);
                            }
                        }
                    }
                }
            }
        }
   
    //проверка значения 'r'
    for (i = 0; i < m_string; i++)
    {
        if ((search[i] == ',') && (search[i+1] == ' '))
        {
            for (j = (i+1); search[j+1] != ')'; j++)
            {
                if (((search[j+1]<='9') && (search[j+1]>='1')) || (search[j+1] =='.')) {
                }
                else{
                    for (n = 0; n != (j+1); n++)
                    {
                        printf(" ");
                    }
                    printf("\nError: expected r '<double>'");
                    exit(0);
                }
            }
        }
    }
}
