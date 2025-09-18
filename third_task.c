#include <stdio.h>
#include <math.h> //Why do we need this library?

int main()
{
    int a, b, c;


    printf("Please give a: ");
    scanf("%d", &a);

    printf("Please give b: ");
    scanf("%d", &b);

    printf("Please give c: ");
    scanf("%d", &c);

    /* calculate the discriminant   <-- this is a comment for multiple lines
     the discriminant is: b² - 4ac
    */

    int disc = pow(b, 2) - 4 * a * c;

    

    // according to the value of the discriminant, calculate the roots and print the results

    if(disc < 0){
        printf("No answer");
        return 0;
    }else{
        float num = sqrt(disc);
        if(num == 0){
            float root = (-b + num)/(2*a);
            printf("1 root: %f", root);
            return 0;
        }else{
            float root1 = (-b + num)/(2*a);
            float root2 = (-b - num)/(2*a);
            printf("2 roots: %f, %f", root1, root2);
            return 0;
        }
    }

    return 0;
}