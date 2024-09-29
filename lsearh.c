#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,a[10],i,key=3,flag;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element to be searched : ");
    scanf("%d",&key);
    for ( i = 0; i < n; i++)
    {
        if (a[i]==key)
        {
            flag=1;
            break;
        }
    }
    if (flag==1)
    {
        printf("key is found");
    }
    else
    {
        printf("key is not found");
    }
    
}
