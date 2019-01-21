/*
AIM - Write a c program to add and multiply elements of a matrix.
Roll N0- 106018
Name - Chaitanya Hivlekar
*/
#include <stdio.h>

 
void main()
{
   int m, n, c, d, mat[20][20], sum = 0, pro = 1;
 
   printf("Enter the number of rows and columns of matrix\n");
   scanf("%d%d", &m, &n);
   printf("Enter the elements of matrix\n");
   
 
   for (c = 0; c < m; c++)
    {
      for (d = 0; d < n; d++)
       {
         scanf("%d", &mat[c][d]);
       }
    }
   for (c = 0; c < m; c++)
   {
      for (d = 0 ; d < n; d++) 
      {
         sum = sum+mat[c][d];
         pro = pro*mat[c][d];
      }
      
   }
   printf("sum = %d\n", sum);
   printf("product = %d\n", pro);
   
}

/*
chaitanya@chaitanya-X540SA:~$ gcc pp2_sum_pro_elements.c
chaitanya@chaitanya-X540SA:~$ ./a.out
Enter the number of rows and columns of matrix
2
2
Enter the elements of matrix
1
2
1
2
sum = 6
product = 4

*/
