/*
AIM - Write a c program to copy elements of array into another array.
Roll N0- 106018
Name - Chaitanya Hivlekar
*/
#include<stdio.h>
void main() 
{
int arr1[100], arr2[100], i, num;
printf("Enter the no of elements \n");
scanf("%d", &num);
printf("Enter %d elements in array \n", num);
for (i = 0; i < num; i++) 
{
  scanf("%d", &arr1[i]);
  arr2[i] = arr1[i];
}
printf("The copied array is \n");
for (i = 0; i < num; i++)
printf("%d \n",arr2[i]);
}
/*
chaitanya@chaitanya-X540SA:~$ gcc pp14_arr_copy.c
chaitanya@chaitanya-X540SA:~$ ./a.out
Enter the no of elements 
5
Enter 5 elements in array 
1
2
3
4
8
The copied array is 
1 
2 
3 
4 
8 

*/
