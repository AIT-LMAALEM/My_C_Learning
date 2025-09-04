#include <stdio.h>
#include <stdlib.h>

int main()
{

    int array[10];
    for(int i =0;i<10;i++){
        printf("Entrer number %d:",i+1);
        scanf("%d",&array[i]);
    }
    for(int i=0;i<10;i++){
        printf("%d",array[i]);
    }

    // SUM
    int sum=0;
    for(int i=0; i<10;i++){
        sum+=array[i];
    }
    printf("la somme :%d",sum);

    // max
    int max=array[0];
    for(int i=1;i<10;i++){
        if (array[i]>max) max=array[i];

    }
    printf("max :%d",max);

    // MIN
    int min=array[0];
    for(int i=1;i<10;i++){
        if (array[i]<min) min =array[i];
    }
    printf("min :%d",min);








    return 0;
}
