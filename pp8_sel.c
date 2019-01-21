/*
AIM - Write a c program to sort array elements using selection sort.
Roll N0- 106018
Name - Chaitanya Hivlekar
*/

#include <stdio.h>
 
void main()
{
  int array[100], n, i, j, pos, swap;
 
  printf("Enter number of elements\n");
  scanf("%d", &n);
 
  printf("Enter %d integers\n", n);
 
  for (i = 0; i < n; i++)
    scanf("%d", &array[i]);
 
  for (i = 0; i < (n - 1); i++)
  {
    pos = i;
   
    for (j = i + 1; j < n; j++)
    {
      if (array[pos] > array[j])
        pos = j;
    }
    if (pos != i)
    {
      swap = array[i];
      array[i] = array[pos];
      array[pos] = swap;
    }
  }
 
  printf("Sorted list in ascending order\n");
 
  for (i = 0; i < n; i++)
    printf("%d\n", array[i]);
 
  
}
/*
chaitanya@chaitanya-X540SA:~$ gcc pp8_sel.c
chaitanya@chaitanya-X540SA:~$ ./a.out
Enter number of elements
8
Enter 8 integers
34
53
15
6
3
1
76
56
Sorted list in ascending order
1
3
6
15
34
53
56
76

*/
