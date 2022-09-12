#include <stdio.h>
#include <conio.h>
int main()
{int n,i=1,sum=0;
 printf("\n enter number = ");
 scanf("%d", &n);
 while(i<=n)
{sum=sum+i;
  i++;
}
printf("\n sum of %d natural number is %d",n,sum);
getch();
return 0;
}
