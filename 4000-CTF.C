#include<stdio.h>
#include<conio.h>
main()
{
  float celsius,fahrenheit;
  clrscr();
  printf("Enter value of celsius =");
  scanf("%f",&celsius);
  fahrenheit= celsius*9/5+32;
  printf("Value of fahrenheit=%0.2f",fahrenheit);

  getch();

}