#include <stdio.h>
#include <conio.h>
 int main()
{ int i,n,k[10],key,first,last,mid;
  printf("\n enter number of element =");
 scanf("%d", &n);
 for(i=0;i<n;i++)
{ scanf("%d", & k[i]); }
 printf("\n enter the key you want to search =");
 scanf("%d", & key);
 first=0;
 last=n-1 ;
 mid=(first+last)/2 ;
 while(first<=last)
{ if(k[mid]<key)
{ first=mid+1;}
else
  if(k[mid]==key)
{printf("\n %d formed at location %d",key,mid+1);
  break;}
else
  last=mid-1;}
  mid=(first+last)/2;
{ if(first>last)
 printf("\n not found");
} 
 getch();
}
