#include <stdio.h>
#include <stdlib.h>
#include <math.h>


// la somme s=1+10+10^2+....10^n
int main()
{
    int n,s=0,i;
    printf("donner la valeur de n:");
    scanf("%d",&n);
    i=0;
    while(i<=n){
        s=s+ pow(10,i);
        i++;

    }
    printf("la somme S :%d",s);







    return 0;
}
