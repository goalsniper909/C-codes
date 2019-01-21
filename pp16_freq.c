/*
AIM - Write a c program to print frequencies elements in an array.
Roll N0- 106018
Name - Chaitanya Hivlekar
*/
#include <stdio.h>
void main()
{
int arr[100], freq[100], size, i, j, c;
printf("Enter size of array \n");
scanf("%d", &size);
printf("Enter elements \n");
for(i=0; i<size; i++)
 {
  scanf("%d", &arr[i]);
  freq[i] = -1;
 }
for(i=0; i<size; i++)
 {
  c = 1;
  for(j=i+1; j<size; j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
                freq[j] = 0;
            }
        }

        if(freq[i] != 0)
        {
         freq[i] = c;
        }
  }

    
    printf("Frequencies \n");
    for(i=0; i<size; i++)
    {
        if(freq[i] != 0)
        {
            printf("%d = %d \n", arr[i], freq[i]);
        }
    }

    
}
/*
chaitanya@chaitanya-X540SA:~$ gcc pp17_freq.c
chaitanya@chaitanya-X540SA:~$ ./a.out
Enter size of array 
8
Enter elements 
8
8
8
1
19
7
8
19
Frequencies 
8 = 4 
1 = 1 
19 = 2 
7 = 1 

*/
