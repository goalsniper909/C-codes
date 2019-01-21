/*
AIM - Write a c program to print pyramid.
Roll N0- 106018
Name - Chaitanya Hivlekar
*/

#include<stdio.h>
void main()
{
int i,j,k,star,space,l,a=1,b,c,d;

for(i=a;i<7;i++)
{
 star = i*2-1;
 space = i+6-star;
 for(j=0;j<space;j++)
 {
  printf("%c",' ');
 }
 for(k=0;k<star;k++)
 {
  printf("%c",'*');
 }
 printf("\n");

}
}
/*
chaitanya@chaitanya-X540SA:~$ gcc pp10_pyr.c
chaitanya@chaitanya-X540SA:~$ ./a.out
      *
     ***
    *****
   *******
  *********
 ***********

*/
