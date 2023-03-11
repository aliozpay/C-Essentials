/*

*/

struct Rectangle
{
    int length;
    int width;
};

#include <stdio.h>
int main(){ 
    
    struct Rectangle r1 = {20,30}; //Initial conditions
    printf("Size of structure is : %d\nRectangle's length : %d\nRectangle's width : %d",sizeof(r1),r1.length,r1.width);

    

    
}