#include <stdio.h>
#include<conio.h>
int main()
{int n,i,j,a[10],temp;
printf("\n enter the size of array=");
scanf("%d", &n);
for(i=0;i<n;i++)
{printf("\n enter the %d element=",i+1);
scanf("%d", & a[i]);
}
for(i=0;i<n;i++)
{for(j=0;j<n-i-1;j++);
{if (a[j]>a[j+1])
{temp=a[j];
 a[j]=a[j+1];
 a[j+1]=temp;
}}}
for(i=0;i<n;i++)
{
printf("\n %d ",a[i]);
}
return 0;
}
