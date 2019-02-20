#include<stdio.h>
#include<conio.h>
void main()
{
   int a,b,c;
   clrscr();
   printf("Enter the value of a,b,c");
   scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
   if((a>b)&&(a>c))
      printf(a);
   elseif(b>c)
      printf(b);
   else
      printf(c);
   getch();
 }  
