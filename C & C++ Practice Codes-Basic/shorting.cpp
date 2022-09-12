#include <stdio.h>
#include <conio.h>
int main()
int n,i,j,a[20],temp
for(i=0;i<=n-1;i++)
{min=a[i]
 loc=i;
 for(j=i+1;j<=n-1;j++)
 {if(a[j<min])
 {min=a[j];
 loc=j;
 }
 if(loc!=i)
 {temp=a[i];
  [i]=a[loc];
 a[loc]=temp;
 }}}
