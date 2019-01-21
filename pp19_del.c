/*
AIM - Write a c program to delete an element at desired position from an array.
Roll N0- 106018
Name - Chaitanya Hivlekar
*/

#include <stdio.h>
void main()
{
int arr[100], pos, i, n;
printf("Enter number of elements in array \n");
scanf("%d", &n);
printf("Enter elements \n");
for (i = 0; i < n; i++)
scanf("%d", &arr[i]);
printf("Enter the location where you wish to delete element \n");
scanf("%d", &pos);
if (pos >= n+1)
{
 printf("Deletion not possible \n");
}
else
{
 for (i = pos - 1; i < n - 1;i++)
 arr[i] = arr[i+1];
 printf("Resultant array \n");
 for (i = 0; i < n - 1; i++)
 printf("%d\n", arr[i]);
}
 
   
}
/*
chaitanya@chaitanya-X540SA:~$ gcc pp19_del.c
chaitanya@chaitanya-X540SA:~$ ./a.out
Enter number of elements in array 
8
Enter elements 
1
2
3
4
5
6
7
8
Enter the location where you wish to delete element 
3
Resultant array 
1
2
4
5
6
7
8

*/
