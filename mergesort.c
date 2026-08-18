#include<stdio.h>
void merge(int a[],int p,int q,int r){
    int n1=q-p+1;
    int n2=r-q;
    int L[50],R[50];
    for(int i=0;i<n1;i++){
        L[i]=a[p+i];
    }
    for(int i=0;i<n2;i++){
        R[i]=a[q+1+i];
    }
    int i=0,j=0,k=p;
    for(k=p;k<=r;k++){
        if(L[i]<=R[j]){
            a[k]=L[i];
            i++;
        }
        else{
            a[k]=R[j];
            j++;
        }
    }
}

void mergeSort(int a[],int p,int r){
    if(p<r){
        int q=(p+r)/2;
        mergeSort(a,p,q);
        mergeSort(a,q+1,r);
        merge(a,p,q,r);
    }
}
int main(){
    int a[50],n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    mergeSort(a,0,n-1);
    printf("Sorted array: ");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}