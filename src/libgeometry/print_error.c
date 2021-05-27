#include "function.h"
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum Errors { UnExpToken = 1, ExpBracket, ExpDouble, ExpCircle };

void print_error(int err)
{
    if (err == UnExpToken) {
        printf("\nError: unexpected token");
    }
    if (err == ExpBracket) {
        printf("\nError: expected ')'");
    }
    if (err == ExpDouble) {
        printf("\nError: expected '<double>'");
    }
    if (err == ExpCircle) {
        printf("\nError: expected 'circle'");
    }
}
