/*
AIM - Write a c program to seperate odd and even integers in seperate arrays.
Roll N0- 106018
Name - Chaitanya Hivlekar
*/

#include <stdio.h>
void main()
{
 int arr[10], odd[10], eve[10];
 int i, j = 0, k = 0, n;
 printf("Enter the size of array \n");
 scanf("%d", &n);
 printf("Enter elements  \n");
 for (i = 0; i < n; i++)
  {
   scanf("%d", &arr[i]);
  }
 for (i = 0; i < n; i++)
   {
     if (arr[i] % 2 == 0)
      {
       eve[j] = arr[i];
       j++;
      }
      else
      {
        odd[k] = arr[i];
        k++;
      }
    }
 
    printf("Odd elements are \n");
    for (i = 0; i < k; i++)
     {
      printf("%d \n", odd[i]);
     }
    printf("Even elements are \n");
    for (i = 0; i < j; i++)
     {
      printf("%d \n", eve[i]);
     }
 
}
/*
chaitanya@chaitanya-X540SA:~$ gcc pp18_odd_eve.c
chaitanya@chaitanya-X540SA:~$ ./a.out
Enter the size of array 
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
Odd elements are 
1 
3 
5 
7 
Even elements are 
2 
4 
6 
8 

*/

