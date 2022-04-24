#include<stdio.h>
#include<conio.h>
int main()
{int n,i=1,fact=1;
 printf("\n enter value = ");
 scanf("%d", &n);
 while(i<=n)
{fact=fact*i;
 i++;    }
 printf("\n factorial of number %d is %d",n,fact);
 getch();
 return 0;
}
