void main()
{
int a,b,c;
clrscr();
printf("\nEnter the Three Num:");
scanf("\n%d \n%d \n%d",&a,&b,&c);
if(a>b && a>c)
printf("\n%d is greater",a);
else if(b>a && b>c)
printf("\n%d is greater",b);
else
printf("\n%d is greater",c);
getch();
}
