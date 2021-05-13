#include "function.h"

#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int m_string = 60;
    char search[m_string];
    struct object circle[3];
    char verify;
    int result_char;

    for (int i = 0; i < 3; i++) {
        result_char = 0;
        printf("\nEnter your information as shown on the example: \nObject '(' Point ',' Number ')'\nPoint = Number Number\nNumber = (* Floating-point number *)\nEnter please: \n");
        for (int j = 0; j < m_string; j++) {
            verify = getchar();
            if (verify == '\n') {
                break;
            }
            search[j] = verify;
            result_char++;
        }
        for (int k = result_char; k < m_string; k++) {
            search[result_char] = '\0';
        }

        check_circle(search, m_string);
        circle[i].r = p_and_a(search, m_string);
        circle[i].x = coordinate_x(search, m_string);
        circle[i].y = coordinate_y(search, m_string);

        for (int j = 0; j < m_string; j++) {
            search[j] = '\0';
        }
    }
    for (int i = 0; i < 3; i++) {
        printf("circle(%.2f %.2f, %.2f)\n",
               circle[i].x,
               circle[i].y,
               circle[i].r);
    }

    object_crossing(circle);
    output(circle);
}
