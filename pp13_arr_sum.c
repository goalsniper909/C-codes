/*
AIM - Write a c program to find sum of elements in an array.
Roll N0- 106018
Name - Chaitanya Hivlekar
*/
#include <stdio.h>
void main()
{
int arr[100], i, n, sum = 0;
printf("Enter size of the array \n");
scanf("%d", &n);
printf("Enter %d elements in the array \n", n);
for(i=0; i<n; i++)
{
 scanf("%d", &arr[i]);
 sum = sum + arr[i];
}
printf("Sum of all elements of array = %d \n", sum);
}
/*
chaitanya@chaitanya-X540SA:~$ gcc pp13_arr_sum.c
chaitanya@chaitanya-X540SA:~$ ./a.out
Enter size of the array 
5
Enter 5 elements in the array 
1
2
3
4
5
Sum of all elements of array = 15
*/
