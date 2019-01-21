/*
AIM - Write a c program to sort array elements using bubble sort.
Roll N0- 106018
Name - Chaitanya Hivlekar
*/

#include <stdio.h>
 
void main()
{
  int array[100], n, i, j, swap, c;
 
  printf("Enter number of elements\n");
  scanf("%d", &n);
 
  printf("Enter %d numbers\n", n);
 
  for (i = 0; i < n; i++)
    scanf("%d", &array[i]);
  
  printf("Enter 1 for ascending order and 2 for descending order\n");
    scanf("%d", &c);
  
   if(c == 1)
    {
      for (i = 0 ; i < n - 1; i++)
       {
        for (j = 0 ; j < n - i - 1; j++)
         {
           if (array[j] > array[j+1]) 
            {
              swap       = array[j];
              array[j]   = array[j+1];
              array[j+1] = swap;
            }
          }
        }
          printf("Sorted list in ascending order\n");
          for (i = 0; i < n; i++)
          printf("%d\n", array[i]);
     }
  

    else if(c == 2)
    {
      for (i = 0 ; i < n - 1; i++)
       {
        for (j = 0 ; j < n - i - 1; j++)
         {
           if (array[j] < array[j+1]) 
            {
              swap       = array[j];
              array[j]   = array[j+1];
              array[j+1] = swap;
            }
          }
        }
          printf("Sorted list in descending order\n");
          for (i = 0; i < n; i++)
          printf("%d\n", array[i]);
     }
     
    else
    printf("Wrong choice!\n");
}
/*
chaitanya@chaitanya-X540SA:~$ gcc pp7_bubble.c
chaitanya@chaitanya-X540SA:~$ ./a.out
Enter number of elements
3
Enter 3 numbers
29
75
0
Enter 1 for ascending order and 2 for descending order
2
Sorted list in descending order
75
29
0
chaitanya@chaitanya-X540SA:~$ gcc pp7_bubble.c
chaitanya@chaitanya-X540SA:~$ ./a.out
Enter number of elements
3
Enter 3 numbers
56
19
44
Enter 1 for ascending order and 2 for descending order
1
Sorted list in ascending order
19
44
56
chaitanya@chaitanya-X540SA:~$ gcc pp7_bubble.c
chaitanya@chaitanya-X540SA:~$ ./a.out
Enter number of elements
5
Enter 5 numbers
6
544
3454
2
8
Enter 1 for ascending order and 2 for descending order
8
Wrong choice!

*/
