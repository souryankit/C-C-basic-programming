#include<stdio.h>
#include<conio.h>
struct date
{ int dd;
  char mmm[3];
  int yyyy;
};
int main()
{ int a;
struct date d1,d2;
printf("\n enter date");
scanf("%d", &d1.dd);
scanf("%s", &d1.mmm);
scanf("%d", &d1.yyyy);
printf("%d",d1.dd);
printf("%s",d1.mmm);
printf("%d",d1.yyyy);
return 0;
}
