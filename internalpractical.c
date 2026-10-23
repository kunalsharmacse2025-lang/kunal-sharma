#include <stdio.h>

void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int A[], int p, int q) {
    int x = A[p]; 
    int i = p; 

    for (int j = p + 1; j <= q; j++) {
        if (A[j] < x) {
            i++; 
            swap(&A[i], &A[j]);
        }
    }
    swap(&A[p], &A[i]);
    return i;
}

void quickSort(int A[], int p, int q) {
    if (p < q) {
        int m = partition(A, p, q); 
        quickSort(A, p, m - 1);
        quickSort(A, m + 1, q);
    }
}

int main() {
    int n,A[100];
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    
    quickSort(A, 0, n - 1);
    
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
    
    return 0;
}
