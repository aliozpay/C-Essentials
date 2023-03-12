#include <stdio.h>
#include <stdlib.h>

struct rectangle{

    int length;
    int width;
};
int main()
{

    /* 
        Ex1: Accesing struct's variable over the pointer
        We used (*p).length instead of p->length.
    */

    struct rectangle r1 = {10,5};
    struct rectangle *p;
    struct rectangle *p2;
    p = &r1;
    printf("Length value is : %d\n",p->length);
    printf("Width value is : %d\n ",p->width);

    /*
        Ex2: Dynamic memory using with structures and accesing over the heap
    */
    p2 = (struct rectangle *)malloc(sizeof(struct rectangle));
    p2->length = 100;
    p2->width = 200;
    printf("Ex2: Reading structure values from heap\n");
    printf("Length : %d\n",p2->length);
    printf("Width : %d\n",p2->width);
    free(p2);
}