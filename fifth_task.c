#include <stdio.h>

int main(){
    int n;

    printf("Length?: ");
    scanf("%d", &n);

    printf("+");

    for (int i = 0; i < n; i++)
    {
        printf("-");
    }

    printf("+\n");

    return 0;

    


}