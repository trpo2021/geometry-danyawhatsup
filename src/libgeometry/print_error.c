#include "function.h"
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum Errors { UnExpToken = 1, ExpBracket, ExpDouble, ExpCircle };

void print_error(int error)
{
    if (error == UnExpToken) {
        printf("\nError: unexpected token");
    }
    if (error == ExpBracket) {
        printf("\nError: expected ')'");
    }
    if (error == ExpDouble) {
        printf("\nError: expected '<double>'");
    }
    if (error == ExpCircle) {
        printf("\nError: expected 'circle'");
    }
}
