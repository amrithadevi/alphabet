void main()
{
   int a,b,c;
   printf("Enter the value of a,b,c");
   scanf("%d%d%d",&a,&b,&c);
   if((a>b)&&(a>c))
      printf("A is greater");
   elseif(b>c)
      printf("B is greater");
   else
      printf("C is greater");
   getch();
 }  
