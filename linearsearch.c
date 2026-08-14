#include<stdio.h>
int main()
{
    int i,n,key,a[40],flag=0;
    printf("Enter the element:");
    scanf("%d",&n);
    printf("Enter the key:");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        printf("Enter the element %d ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            printf("Element found at index %d",i);
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("No element found");
    }
    return 0;
}
