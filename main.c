#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

void check_circle(char* search, int max_string){
    char check_string[] = {'c', 'i', 'r', 'c', 'l', 'e'};
    char s_str[max_string];
    int i, j;

    for (i = 0; search[i] != '('; i++) {
        search[i] = tolower (search[i]);
    }
    
    for (i = 0; search[i] != '('; i++) {
        s_str[i] = search[i];
    }
    j = strcmp(s_str, check_string);
    if (j != 0) {
        printf("%s""Error: expected 'circle'", s_str);
        
    }
    
}


int main()
{
    int max_string = 101;
    char search[max_string];
    char b1[1], sb[1], com[1], b2[1];
    double x = 0.0, y = 0.0, r = 0.0;
    
    printf("Enter your information as shown on the example: \nObject '(' Point ',' Number ')'\nPoint = Number Number\nNumber = (* Floating-point number *)\nEnter please: ");
    scanf("%s",search);
    check_circle(search, max_string);
    for (int i = 0; i < 1; i++)
    {
        scanf("%c", &b1[i]);
    }

    for (int i = 0; i < 1; i++)
    {
        scanf("%lf", &x);
    }

    for (int i = 0; i < 1; i++)
    {
        scanf("%c", &sb[i]);
    }

    for (int i = 0; i < 1; i++)
    {
        scanf("%lf", &y);
    }

    for (int i = 0; i < 1; i++)
    {
        scanf("%c", &com[i]);
    }

    for (int i = 0; i < 1; i++)
    {
        scanf("%c", &sb[i]);
    }

    for (int i = 0; i < 1; i++)
    {
        scanf("%lf", &r);
    }

    for (int i = 0; i < 1; i++)
    {
        scanf("%c", &b2[i]);
    }
    
    if (x != (int)x) {
        printf("Expected x '<double>'");
    }
    
    if (y != (int)y) {
        printf("Expected y '<double>'");
    }
    
    if (r != (int)r) {
        printf("Expected r '<double>'");
    }
}



 
    

