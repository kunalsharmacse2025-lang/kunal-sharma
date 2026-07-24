#include<stdio.h>
int main()
{
    int a[100],i,n,pos,key,found=0;
    printf("Enter the number");
    scanf("%d",&n);
    printf("Enter the key:");
    scanf("%d",&key);
    printf("Enter the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            found=1;
            printf("Element found at position %d\n",i+1);
            break;
        }
    }
    if(found=0)
    {
        printf("Element not found in the array\n");
    }
    return 0;

}