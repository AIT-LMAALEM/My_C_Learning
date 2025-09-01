#include <stdio.h>
#include <stdlib.h>

// switch statements

int main()
{
   char op;
   int a,b;
   printf("Entrer la valeur de a:");
   scanf("%d",&a);
   printf("Entrer l'operateur (+,-,*,/):");
   scanf("%s",&op);
   printf("Entrer la valeur de b:");
   scanf("%d",&b);

   switch(op){
    case '+':
        printf("la somme de %d et %d :%d\n",a,b,a+b);
        break;
    case '-':
        printf("la soustraction de %d et %d :%d\n",a,b,a-b);
        break;
    case '/':
        if (b!=0) printf("la division de %d par %d :%d\n",a,b,a/b);
        else printf("la division par 0 est impossible\n");
        break;
    case '*':
        printf("le produit de %d est %d :%d\n",a,b,a*b);
        break;
    default:
        printf("Operateur inconnu \n");


   }


    return 0;
}
