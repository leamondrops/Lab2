#include <stdio.h>
#include <math.h>

int main(){
    int n;

    printf("Give number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", i*i);
    }

    return 0;
    
}