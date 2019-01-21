/*
AIM - Write a c program to enter element in an array.
Roll N0- 106018
Name - Chaitanya Hivlekar
*/
#include <stdio.h>
void main()
{
 int arr[100], pos, i, n, value;
 printf("Enter number of elements in array \n");
 scanf("%d", &n);
 printf("Enter elements\n");
 for (i = 0; i < n; i++)
 scanf("%d", &arr[i]);
 printf("Enter the location where you wish to insert an element\n");
 scanf("%d", &pos);
 printf("Enter the value to insert\n");
 scanf("%d", &value);
 for (i = n - 1; i >= pos - 1; i--)
 arr[i+1] = arr[i];
 arr[pos-1] = value;
 printf("Resultant array is\n");
 for (i = 0; i <= n; i++)
 printf("%d\n", arr[i]);
 
  
}
/*
Enter elements
1
2
3
4
5
6
7
8
Enter the location where you wish to insert an element
4
Enter the value to insert
21
Resultant array is
1
2
3
21
4
5
6
7
8

*/
