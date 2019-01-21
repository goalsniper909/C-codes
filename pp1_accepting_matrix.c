/*
AIM - Write a c program to read a matrix.
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
   for (c = 0; c < m; c++)
   {
      for (d = 0 ; d < n; d++) 
      {
         printf("%d\t", mat[c][d]);
      }
      printf("\n");
   }
   
}

/*
chaitanya@chaitanya-X540SA:~$ gcc pp1_accepting_matrix.c
chaitanya@chaitanya-X540SA:~$ ./a.out
Enter the number of rows and columns of matrix
2
2
Enter the elements of matrix
1
2
1
2
1	2	
1	2	

*/
