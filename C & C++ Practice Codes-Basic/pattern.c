#include <stdio.h>
#include <conio.h>
int main()
{int n,c,k=2,r;
 printf("\n enter the number of rows=");
 scanf("%d", &n);
 for(r=1;r<=n;r++)
{ for(c=1;c<=2*n-k;c++)
  printf(" ");
  k=k+2;
  for(c=1;c<=r;c++)
{ printf(" * ");
}
  printf("\n ");
}
  getch();
  return 0;
}
