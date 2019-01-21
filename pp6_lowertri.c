/*
AIM - Write a c program to print lower triangle of a matrix.
Roll N0- 106018
Name - Chaitanya Hivlekar
*/

#include <stdio.h>

 
void main()
{
   int m, n, c, d, mat[20][20], a = 0;
 
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
         if(c >= d)
         {
           printf("%d\t", mat[c][d]);
         }
         else
         {
          printf("0\t");
         }
         
      }
      printf("\n");
   }
   
}

/*
chaitanya@chaitanya-X540SA:~$ gcc pp6_lowertri.c
chaitanya@chaitanya-X540SA:~$ ./a.out
Enter the number of rows and columns of matrix
3
3
Enter the elements of matrix
12
2
3
4
5
6
7
8
9
12	0	0	
4	5	0	
7	8	9	
*/
