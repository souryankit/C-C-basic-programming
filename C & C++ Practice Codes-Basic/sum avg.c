#include <stdio.h>
#include <conio.h>
int main()
{int arr[10],i,sum=0,avg;
for(i=0;i<10;i++)
{printf("\n Enter element number=");
scanf("%d",& arr[i]);
sum=sum+arr[i];
}
 avg=sum/10;
printf("\n average=%d",avg);
getch();
}
