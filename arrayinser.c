#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n=5,pos,a[10];
    printf("Enter the number of elements");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the postion to be inserted");
    scanf("%d",&pos);
    for (int i = n-1; i >= pos; i--)
    {
        a[i+1]=a[i];            
    }
    a[pos]=pos;
    n++;
    printf("elements after insertion");
}