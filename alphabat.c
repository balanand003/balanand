void main()
{
char x;
clrscr();
printf("Enter the character:");
scanf("\n%c",&x);
if((x>='a' &&  x<='z') || (x>='A' && x<='Z'))
printf("\nchar is alphabat");
else
printf("\nchar is not alphabate");
getch();
}
