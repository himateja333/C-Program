#include <stdio.h>
#include <conio.h>
int main() 
{
   
 int a,b;
 float y,x=0.1;
 scanf("%d %d",&a,&b);
 if(a!=0&&b!=0)
   {
    y=(a/b)+(b/a);
    printf("%.3f",y);
   }
 else
   printf("invalid input");
    
    return 0;
}