#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i, *ptr, sum = 0;

    printf("Enter number of MB you want to allocate: ");
    scanf("%d", &num);

    int memToAllocate = num * 1024 * 1024;
    ptr = (int*) malloc(memToAllocate * sizeof(int));  //memory allocated using malloc
    if(ptr == NULL)                     
    {
        printf("Error! memory not allocated.");
        exit(0);
    }

    printf("Initializing memory.... ");
    for(i = 0; i < memToAllocate; ++i)
    {
        ptr[i]=0;
    }
    
    printf("Releasing memory ");
    free(ptr);
    return 0;
}
