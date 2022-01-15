#include<stdio.h>

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
 
    // One by one move boundary of unsorted subarray
    for (i = 0; i < n - 1; i++) {
 
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
 
        // Swap the found minimum element
        // with the first element
        swap(&arr[min_idx], &arr[i]);
    }
}
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {

        int n, x;
        scanf("%d %d",&n,&x);
        int myarr[n];
        for(int j=0;j<n;j++)
        {
            scanf("%d",&myarr[j]);
        }
        selectionSort(myarr,n);

        for(int k=0;k<=(n-1);k++)
        {
            printf("%d",myarr[k]);
        }
    }
    return 0;
}