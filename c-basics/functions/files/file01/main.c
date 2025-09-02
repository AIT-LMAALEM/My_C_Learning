#include <stdio.h>
#include <stdlib.h>

void signe(int A,int B){
    if (A*B >0) printf("A et B on la meme signe \n");
    else printf("A et B on des signes differents \n");
}

int maximum(int A,int B){
    int max;
    if (A>B) max=A;
    else max =B;
    return max;
}
int minimum(int A,int B){
    int min;
    if (A>B) min=B;
    else min =A;
    return min;
}


int main(){
    int A,B;
    int max,min;
    printf("Veuillez saisir la valeur de A:");
    scanf("%d",&A);
    printf("Veuillez saisir la valeur de B:");
    scanf("%d",&B);
    signe(A,B);
    printf("\n le maximum est %d ",maximum(A,B));
    printf("\n le minimum est %d ",minimum(A,B));




    return 0;
}
