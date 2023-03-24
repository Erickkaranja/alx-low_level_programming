#include "function_pointers.h"
#include <stdio.h>



void array_member(int members)
{
printf("array members are %d\n", members);
}

int main(void)
{

    int my_array[5] = {12, 34, 45, 5, 122};

    array_iterator(my_array, 5, &array_member);
    printf("\n");
    return (0);
}
