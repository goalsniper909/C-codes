/*
AIM - Write a c program to count number of duplicate elements in an array.
Roll N0- 106018
Name - Chaitanya Hivlekar
*/
#include <stdio.h>
void main()
{
int arr[100], i, j, n, c = 0,d;
printf("Enter size of the array \n");
scanf("%d", &n);
printf("Enter elements \n");
for(i=0; i<n; i++)
 {
   scanf("%d", &arr[i]);
 }
for(i=0; i<n; i++)
 {
  for(j=i+1; j<n; j++)
   {
    if(arr[i] == arr[j] && arr[i] != d)
     {
      d = arr[j];
      c++;
      break;
     }
   }
 }
printf("duplicate elements = %d \n", c);
}

/*
chaitanya@chaitanya-X540SA:~$ gcc pp15_counting_dup.c
chaitanya@chaitanya-X540SA:~$ ./a.out
Enter size of the array 
8
Enter elements 
1 
1
1
6
6
8
8
0
duplicate elements = 3 

*/
