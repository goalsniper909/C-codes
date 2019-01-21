/*
AIM - Write a c program to multiply two matrices.
Roll N0- 106018
Name - Chaitanya Hivlekar
*/
#include <stdio.h>
 
void main()
{
  int m, n, p, q, c, d, k, sum = 0, first[10][10], second[10][10], multiply[10][10];;
 
 
  printf("Enter number of rows and columns of first matrix\n");
  scanf("%d%d", &m, &n);
  printf("Enter elements of first matrix\n");
 
  for (c = 0; c < m; c++)
    {
     for (d = 0; d < n; d++)
      {
        scanf("%d", &first[c][d]);
      }
    } 
  printf("Enter number of rows and columns of second matrix\n");
  scanf("%d%d", &p, &q);
 
  if (n != p)
     printf("The matrices can't be multiplied with each other.\n");
  else
  {
    printf("Enter elements of second matrix\n");
 
    for (c = 0; c < p; c++)
      {
       for (d = 0; d < q; d++)
       {
         scanf("%d", &second[c][d]);
       }
      } 
    for (c = 0; c < m; c++) 
    {
      for (d = 0; d < q; d++) 
      {
        for (k = 0; k < p; k++) 
        {
          sum = sum + first[c][k]*second[k][d];
        } 
 
        multiply[c][d] = sum;
        sum = 0;
      }
    }
 
    printf("Product of the matrices:\n");
 
    for (c = 0; c < m; c++)  
     {
      for (d = 0; d < q; d++)
        {
          printf("%d\t", multiply[c][d]);
          
        }
        printf("\n");
     }
  }
 
}
/*
chaitanya@chaitanya-X540SA:~$ gcc pp5_mat_pro.c
chaitanya@chaitanya-X540SA:~$ ./a.out
Enter number of rows and columns of first matrix
2
2
Enter elements of first matrix
1
2
1
2
Enter number of rows and columns of second matrix
22
2
The matrices can't be multiplied with each other.

chaitanya@chaitanya-X540SA:~$ gcc pp5_mat_pro.c
chaitanya@chaitanya-X540SA:~$ ./a.out
Enter number of rows and columns of first matrix
2
2
Enter elements of first matrix
1
2
1
2
Enter number of rows and columns of second matrix
2
2
Enter elements of second matrix
1
2
1
2
Product of the matrices:
3	6	
3	6	


*/