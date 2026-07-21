#include<stdio.h>
int main()
{
    int a[100],i,n,pos,item;
    print("Enter the no of elements in array");
    scanf("%d",&n);
    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter position: ");
    scanf("%d",&pos);
    printf("Enter element: ");
    scanf("%d",&item);
    for(i=n;i>=pos;i--)
    {
        a[i]=a[i-1];
    }
    a[pos-1]=item;
    n++;
    printf("Array after insertion:\n");
    for (i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}