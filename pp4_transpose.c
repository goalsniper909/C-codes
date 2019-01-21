/*
AIM - Write a c program to find transpose a matrix.
Roll N0- 106018
Name - Chaitanya Hivlekar
*/
#include <stdio.h>

 
void main()
{
   int m, n, c, d, mat[20][20];
 
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
   printf("Matrix is \n");
   for (c = 0; c < m; c++)
   {
      for (d = 0 ; d < n; d++) 
      {
         printf("%d\t", mat[c][d]);
      }
      printf("\n");
   }
   printf("Transpose of matrix is \n");
   for (c = 0; c < m; c++)
   {
      for (d = 0 ; d < n; d++) 
      {
         printf("%d\t", mat[d][c]);
      }
      printf("\n");
   }
   
}
/*
chaitanya@chaitanya-X540SA:~$ gcc pp4_transpose.c
chaitanya@chaitanya-X540SA:~$ ./a.out
Enter the number of rows and columns of matrix
3
3
Enter the elements of matrix
1
2
4
2
3
8
7
5
6
Matrix is 
1	2	4	
2	3	8	
7	5	6	
Transpose of matrix is 
1	2	7	
2	3	5	
4	8	6	

*/
