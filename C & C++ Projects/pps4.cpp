#include <stdio.h>
#include <conio.h>
#include <math.h>
main()
{float a,b,c,D,r1,r2;
 printf("\n quadratic equation : a*x*x+b*x+c ");
 printf("\n Enter value of a =");
 scanf("%f", &a);
 printf("\n Enter value of b =");
 scanf("%f", &b);
 printf("\n Enter value of c =");
 scanf("%d", &c);
 D=(b*b-4*a*c) ;
 printf("\n D=%f",D);
 if(D>=0)
{printf("\n roots are real");
 r1=(-b+sqrt(D)/2*a);
 printf("\n r1=%f",r1);
 r2=(-b-sqrt(D)/2*a);
 printf("\n r2=%f",r2);
}
else
 printf("\n roots are imaginary");
 getch();
}
