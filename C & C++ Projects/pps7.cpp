#include <stdio.h>
#include <conio.h>
int main()
{int arr[10],i,sum=0;
float avg;
for(i=0;i<5;i++)
   {printf("\n enter number %d =",i+1);
    scanf("%d", & arr[i]);
    sum=sum+arr[i];
}
{printf ("\n sum =%d",sum);
} 
  avg=sum/5;
  printf("\n average =%f",avg);
getch();
}
