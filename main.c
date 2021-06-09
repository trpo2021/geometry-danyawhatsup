#include <libgeometry/function.h>

#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int m_string = 60;
    int error;
    char search1[m_string];
    char search2[m_string];

    printf("\nEnter your information as shown on the example: \nObject '(' Point ',' Number ')'\nPoint = Number Number\nNumber = (* Floating-point number *)\nEnter please: \n");
    scanf("%[^\n]s", search1);
    getchar();
    error = check_circle(search1, m_string);
    if (error != 0) {
       print_error(error);
        exit(0);
    }

    printf("\nEnter your information as shown on the example: \nObject '(' Point ',' Number ')'\nPoint = Number Number\nNumber = (* Floating-point number *)\nEnter please: \n");
    scanf("%[^\n]s", search2);
    check_circle(search2, m_string);
    error = check_circle(search1, m_string);
    if (error != 0) {
        print_error(error);
        exit(0);
    }

    printf("\n");
    printf("1st Circle:");
    output(search1, m_string);
    printf("\n2nd Circle:");
    output(search2, m_string);

    printf("\n");
    printf("\nPerimeter and area of the 1st circle:");
    p_and_a(search1, m_string);
    printf("\n");
    printf("Perimeter and area of the 2ed circle:");
    p_and_a(search2, m_string);

    printf("\n");
    if (crossing(search1, search2, m_string)== 1) {
        printf("Circles crossing");
    } else
        printf("Circles dont crossing");
    return 0;
}
    
