#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int*ptr=(int*)malloc(n*sizeof(int));

    printf("Enter the Elements : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",ptr+i);
    }
    printf("Elements are : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d",*(ptr+i));
    }
    free(ptr);
    ptr = NULL;
}