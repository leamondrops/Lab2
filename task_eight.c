#include <stdio.h>
#include <math.h>

int main(){
    int n = 1000000;

    int rad = 10;

    float vol = (4.0/3.0)*acos(-1.0)*pow(rad,3);

    while(vol < n){
        printf("%f\n",vol);
        rad += 10;

        vol = (4.0/3.0)*acos(-1.0)*pow(rad,3);
    }


    

    return 0;
    
}