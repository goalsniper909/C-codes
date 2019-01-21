/*
AIM - Write a c program to print frequencies elements in an array.
Roll N0- 106018
Name - Chaitanya Hivlekar
*/
#include <stdio.h>
void main()
{
int arr[100], i, size, max, min;
printf("Enter size of the array \n");
scanf("%d", &size);
printf("Enter elements \n");
for(i=0; i<size; i++)
 {
  scanf("%d", &arr[i]);
 }
max = arr[0];
min = arr[0];
for(i=1; i<size; i++)
 {
    if(arr[i] > max)
     {
       max = arr[i];
     }
    if(arr[i] < min)
     {
       min = arr[i];
     }
  }
printf("Max = %d \n", max);
printf("Min = %d \n", min);
}
/*
chaitanya@chaitanya-X540SA:~$ gcc pp17_max_min.c
chaitanya@chaitanya-X540SA:~$ ./a.out
Enter size of the array 
5
Enter elements 
89
56
0
-88
10
Max = 89 
Min = -88 

*/
