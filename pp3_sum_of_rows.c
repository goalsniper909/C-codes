/*
AIM - Write a c program to add elements of each row of a matrix.
Roll N0- 106018
Name - Chaitanya Hivlekar
*/
#include <stdio.h>

 
void main()
{
   int m, n, c, d, mat[20][20], sum;
 
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
      }
      printf("sum of row %d = %d\n",c+1,sum);
      sum = 0;     
   }
     
   
}
/*
chaitanya@chaitanya-X540SA:~$ gcc pp3_sum_of_rows.c
chaitanya@chaitanya-X540SA:~$ ./a.out
Enter the number of rows and columns of matrix
3
3
Enter the elements of matrix
1
2
3
1
2
3
2
3
4
sum of row 1 = 6
sum of row 2 = 6
sum of row 3 = 9

*/
