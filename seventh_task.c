#include <stdio.h>
#include <math.h>

int main(){
    int n;

    printf("Give number: ");
    scanf("%d", &n);

    int i = 1;
    int sqr = i * i;

    while(sqr < n){
        printf("%d\n", sqr);
        i++;
        sqr = i * i;
    }

    return 0;
    
}