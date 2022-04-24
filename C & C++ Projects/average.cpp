# include<stdio.h>
# include<conio.h>
float main()
{ N,i,count=0,sum=0,t; float avg;
printf("\n enter number up to which avg to be find");
scanf ("%d", & N);
for(i=1;i<=N;i++)
{
 printf("\n enter the number");
 scanf("%d",& t);
 if(t==0)
 break;
 if(t<0)
 continue;
 else
 {sum=sum+t;
 count++;} 
}
avg=sum/count;
printf("avg of %d number is %f" ,count,avg);
getch();
return 0;
}
