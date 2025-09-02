#include <stdio.h>
#include <stdlib.h>

//Function that checks whether the year is a leap year or not
void  typeYear(int a){
    if ((a%4==0 && a%100==0) || (a%400==0)) printf("%d is a leap year",a);
    else printf("%d not a leap year",a);
}

int main()
{
    int year;
    do {
      printf("\n Enter a year:");
      scanf("%d",&year);
      typeYear(year);

    }while(year !=0);


    return 0;
}
