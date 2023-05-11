#include<stdio.h>
#include<conio.h>

main(){

 int bs,hra,da,ta,gs;
 clrscr();
 printf("Enter Basic Salary = ");
 scanf("%d",&bs);
printf("Enter HRA = ");
scanf("%d",&hra);
printf("Enter DA = ");
scanf("%d",&da);
printf("Enter TA = ");
scanf("%d",&ta);
 gs = bs+(bs*hra)/100+(bs*da)/100+(bs*ta)/100;
 printf("Gross Salary =%d",gs);
 getch();
 }