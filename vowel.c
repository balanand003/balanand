#include<stdio.h>
#include<conio.h>
void main()
{
char x;
clrscr();
printf("\nEnter the charecter:");
scanf("%c",&x);
if( x=='a'|| x=='e'|| x=='i'|| x=='o'|| x=='u')
printf("\ncharecter is vowel");
else
printf("\ncharecter is consonent");
getch();
}
