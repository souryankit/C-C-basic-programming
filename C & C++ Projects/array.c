#include <stdio.h>
#include <conio.h>
int main()
{ char arr[10];int i,c=0,e=0;
  for(i=0;i<10;i++)
{ if ((arr[i]=='a')||(arr[i]=='e')||(arr[i]=='i')||(arr[i]=='o')||(arr[i]=='u'))
  c++;
else
  e++;
}
  printf("\n Number of vowels=%d",c);
  printf("\n Number of other character=%d",e);
  getch();
}
