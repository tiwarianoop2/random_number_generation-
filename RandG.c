//Every time we compile and run we get new memory location on heap.
//Typecast pointer to int value.
//Value return is very large so you can use other operators like "%" to reduce it to smalll value.

#include<stdlib.h>
int RandG()
{
int *ptr,rand;
ptr=(int*)malloc(0);
rand=(int)ptr;
free(rand);
return rand;
}
