#include <stdio.h>
#include <stdlib.h>
int main()
{

    /*
        Example 1 : Storing adresses of a variable
    */

   int a = 10; 
   int *p1;
   p1 = &a;
   printf("Ex1: Storing adresses of a variable\nAdresses of the variable is : %d\n",p1);

   /*
        Example 2 : Accesing value of a variable over the pointer
   */
  int a2 = 10;
  int *p2;
  p2 = &a2;
  printf("Ex2: Accesing value of a variable over the pointer \nValue of the variable a2 is %d\n", *p2);
  
  /*
        Example 3 : Accesing value of an array over the pointer
  */
 int a1[5] = {1,2,3,4,5};
 int *p3;
 p3 = a1;
 printf("Ex3: Accesing value of an array over the pointer\n");
 for (int i = 0; i<5; i++)
 {
    printf("Values of the defined array are : %d\n",p3[i]);
 }

 /*
    Example4: Creating an array from the dynamic memory with passing the length of the array to heap memory
    lengthArray : Length of the defined array
    we used sizeof(int) because of we wanted to array that have int values. If we want to create an array that have float, double or 
    char values, we can use sizeof(double) or size of(char) instead of sizeof(int).
 */
int *p4;
int lengthArray = 5;
p4 = (int *)malloc(lengthArray*sizeof(int));
p4[0] = 10;
p4[1] = 11;
p4[2] = 12;
p4[3] = 13;
p4[4] = 14;
printf("Ex4: Creating an array using heap memory\n");
 for (int j = 0; j<5; j++)
 {
    printf("Values of the defined array over the heap are : %d\n",p4[j]);
 }
}