#include<stdio.h>
#include<conio.h>
int power(int,int);
int main()
{int a,b;
 printf("\n enter base =");
 scanf("%d", &a);
 printf("\n enter power =");
 scanf("%d", &b);
 printf("\n power of %d raised to %d is %d",a,b,power(a,b));
 getch();
 return 0;
}


