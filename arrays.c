/*
    Arrays are defined as collection of similar data types.
    The below arrays were created in the stack of the main memory.
    The generally length of array should be define before assignment values to array
*/

#include <stdio.h>
int main(){ 

    int A[5] = {1,2,3,4,5}; /*Initial values of array*/
    
    for (int i = 0 ; i < 5; i++)
     {
        printf("The number = %d \n",A[i]);
     }

    /* 
    If you run the below code, you can see the missing length of the array because the A2 array's size is not defined. You are waiting for the user's input to create the array's length.
    int arrayLengthInput;
    scanf("Input the length of array %d",&arrayLengthInput);
    int A2[arrayLengthInput];
    A2[0] = 5;
    for (int j = 0 ; j < arrayLengthInput ; arrayLengthInput ++)
    {
        printf("The numbers of the A2 array = %d \n",A2[j]);
    }*/
  
    
}