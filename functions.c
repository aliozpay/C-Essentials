#include <stdio.h>
#include <stdlib.h>

void swap (int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("Ex1: Formal parameter values are x:%d,y:%d\n",x,y);
}

void swap2(int *value1, int *value2)
{
    int temp;
    temp = *value1;
    *value1 = *value2;
    *value2 = temp;
    printf("Ex2: Formal parameter values are x:%d,y:%d\n",*value1,*value2);
}
int main()
{

    /*
        Ex1: Pass by Value
        a,b: Actual parameter
        x,y: Formal parameter
        In the Pass by Value method, the actual parameters can not be change when function is called.
    */
    int a,b;
    a = 10;
    b = 20;
    swap(a,b);
    printf("Ex1: Actual parameter values are a:%d,b:%d\n",a,b);

    /*
        Ex2: Call by argument
        k,j: Actual parameter
        *value1,*value2: Formal parameter
        In the Call by argument method, the actual parameters can be change when function is called.
    */
    int k,j;
    k = 50;
    j = 100;
    swap2(&k,&j);
    printf("Ex2: Actual parameter values are a:%d,b:%d\n",k,j);

}