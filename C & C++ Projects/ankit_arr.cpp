# include<stdio.h>
# include<stdio.h>
 int main()
 {
 	int n,marks[n], i;
 	printf("\n enter the size of array");
 	scanf(" %d", &n);
 	for (i=0; i<n; i++)
   {
   	printf("\n enter marks of %d student", i+1);
   	scanf("%d", & marks[i]);
   }
    for( i=0; i<n; i++)
    { printf("\n marks of student %d is %d", i, marks[i]);
	}
	return 0;
 }
