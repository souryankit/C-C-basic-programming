#include <stdio.h>
#include <conio.h>
int main()
{int arr[5]={5,4,8,2,7},n,i=0;
 printf("\n enter number to search =");
 scanf("%d", &n);
 for(i=0;i<10;i++)
if(n==arr[i])
printf("\n element found at location %d of array ",i);
getch();
return 0;
}
