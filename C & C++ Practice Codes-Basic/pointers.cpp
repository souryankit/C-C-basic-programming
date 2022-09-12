#include<stdio.h>
#include<conio.h>
void swap(int*, int*);
int main()
{int a,b,*pa,*pb;
scanf("%d",&a);
scanf("%d",&b);
printf("values before swap");
printf("%d %d",a,b);
swap(&a,&b);
printf("value after swap");
printf("%d %d",a,b);
getch();
return 0;
}
void swap(int*x, int*y)
{int temp;
 temp=*x;
 *x=*y;
 *y=temp; 
 return ;
}
