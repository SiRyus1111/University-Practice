#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{

    double w, h, area, perimeter;

    scanf("%lf", &w);
    scanf("%lf", &h);

    area = w * h;
    perimeter = 2 * (w + h);

    printf("사각형의 넓이: %lf\n사각형의 둘레: %lf\n", area, perimeter);

    return 0;
}