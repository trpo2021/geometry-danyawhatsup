#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void check_circle(char* search, int m_string){
    char check_string[] = {'c', 'i', 'r', 'c', 'l', 'e', '('};
    int is_true = 0;
    int i, j, n, k;
    //char x, y, r;
    //правильность написания + ргеистр
    for (i = 0; i < 7; ++i) {
        if (tolower(search[i]) != check_string[i]) {
            is_true = 1;
        }
    }
        if (is_true != 0) {
            printf("\nError: expected 'circle': ");
        }
    //переход на первое значение в скобках, то есть на занчение 'x'
    for (i =0; i < m_string; i++)
    {
        if (search[i] == '(' ) {
            for (j = i; search[j+1] != ' '; j++)
            {
                if ((search[j+1] <= '9') && (search[j+1] >= '1')) {
                }
                else{
                    for (n =0; n != (j+1); n++) {
                        printf(" ");
                    }
                    printf("\nError: expected x '<double>'");
                    exit(0);
                    
                }
            }
        }
    }
    //переход на значение 'y'
    for (i =0; i < m_string; i++) {
        if (search[i] == ' ') {
            for (j = i; search[j+1] != ' '; j++) {
                if ((search[j+1]<='9') && (search[j+1]>='1')) {
                }
                else{
                    for (n =0; n != (j+1); n++) {
                        printf(" ");
                    }
                    printf("\nError: expected y '<double>'");
                    exit(0);
                }
            }
        }
    }
    //проверка значения 'r'
    for (i = 0; i < m_string; i++) {
        if ((search[i] == ',') && (search[i+1] == ' ')) {
            for (j = (i+1); search[j+1] != ')'; j++) {
                if ((search[j+1] <= '9') && (search[j+1] >= '1')) {
                }
                else{
                    for (n = 0; n != (j+1); n++) {
                        printf(" ");
                    }
                    printf("\nError: expected r '<double>'");
                }
            }
        }
    }
}

void output(char* search, int m_string){
    
        for (int i = 0; i < m_string; i++)
        {
            search[i]=tolower(search[i]);
        }
        printf("%s",search);
    
}

int main()
{
    int m_string = 60;
    char search[m_string];
    //float x = 0.0, y = 0.0, r = 0.0;
    
    printf("Enter your information as shown on the example: \nObject '(' Point ',' Number ')'\nPoint = Number Number\nNumber = (* Floating-point number *)\nEnter please: ");
    scanf("%[^\n]s",search);
    check_circle(search, m_string);
    
    

}



 
    

