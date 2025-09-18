#include <stdio.h>
#include <math.h>

int main()
{
    int x1, y1, x2, y2;

    printf("Give x1: ");
    scanf("%d", &x1);

    printf("Give y1: ");
    scanf("%d", &y1);

    printf("Give x2: ");
    scanf("%d", &x2);

    printf("Give y2: ");
    scanf("%d", &y2);

    float dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("%fn", dist);

    return 0;
}