# include<stdio.h>
# include<conio.h>
int fabe(int);
int main()
{
 int i=0, j, n;
printf("\n enter the number");
scanf(" %d ",& n);
for (j=0; j<n; j++)
 {
 	printf("\n %d ",fabe(j));
 }
   return 0;
}
 int fabe (int n)
  {
  	if (n==0)
  	return 0;
  	if (n<=1)
  	return 1;
  	else
  	return(fabe(n-1)+fabe(n-2));
 }
