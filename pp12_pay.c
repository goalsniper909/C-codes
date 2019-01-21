/*
AIM - Write a c program to calculate wage.
Roll N0- 106018
Name - Chaitanya Hivlekar
*/
#include<stdio.h>
void main()
{
double pay_rate, hrs, pay;
printf("Enter the pay rate\n");
scanf("%lf", & pay_rate);
printf("Enter work hours\n");
scanf("%lf", &hrs);
 if(hrs <= 40)
  {
    pay = hrs*pay_rate;
    printf("pay = %lf \n", pay);
  }
 else if(hrs > 40 && hrs<= 50)
  {
    pay = (40*pay_rate)+((hrs - 40)*pay_rate*1.5);
    printf("pay = %lf \n", pay);
  }
 else
 printf("pay = %lf \n",((40*pay_rate)+((10)*pay_rate*1.5)));
}

/*
chaitanya@chaitanya-X540SA:~$ gcc pp12_pay.c
chaitanya@chaitanya-X540SA:~$ ./a.out
Enter the pay rate
20
Enter work hours
43
pay = 890.000000 

*/
