#include <stdio.h>

int gcd(int p, int q){
    if(q==0) return p;
    return gcd(q,p%q);
}

int main(){

    int my_gcd = gcd(30,20);
    printf("This is the gcd of 30 and 20 - %d\n",my_gcd);


    return 0;
}