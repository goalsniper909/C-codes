/*
AIM - Write a c program to check whether a number is armstrong or not.
Roll N0- 106018
Name - Chaitanya Hivlekar
*/
#include<stdio.h>
void main()
{
int num,c,res = 0,dro;
printf("Enter a number\n");
scanf("%d", &num);
dro = num;
while(dro != 0)
{
 c = dro%10;
 res = res + c*c*c;
 dro = dro/10;
} 
if (res == num)
printf("It's an Armstrong number\n");
else
printf("It's not an Armstrong number\n");
}
/*
chaitanya@chaitanya-X540SA:~$ gcc pp9_armstrong.c
chaitanya@chaitanya-X540SA:~$ ./a.out
Enter a number
371
It's an Armstrong number
chaitanya@chaitanya-X540SA:~$ gcc pp9_armstrong.c
chaitanya@chaitanya-X540SA:~$ ./a.out
Enter a number
2
It's not an Armstrong number

*/
