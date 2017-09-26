#include<stdio.h>
int main()
{
   
   int i,a,b,c,s;
   printf("enter the number");
   scanf("%d", &i);
   c=i%10;
   b=(i/10)%10;
   a=(i/10)/10;
   s=a+b+c;
   printf("%d",s);
   printf("\n");
   return 0;
}
   
