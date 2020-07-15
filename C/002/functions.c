#include <stdio.h>

void square(double a);
int main(void)
{
    square(5);
    return 0;
}

void square(double a) {
    double y;

    y = a * a ;

    printf("the answer is %f \n", y);
}
