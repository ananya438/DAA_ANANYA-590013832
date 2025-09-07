//https://github.com/ananya438/DAALAB_ANANYA-590013832

#include<stdio.h>
#include<time.h>
int binarysearch(int arr[],int n,int key){
    int low=0;
    int high=n-1;
    int mid;
    while (low <= high){

        mid = (low+high)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if (arr[mid]<key){
            low=mid+1;
        }
        else
            high=mid+1;

    }

    return -1;

}
    void main() {
        int arr[] = {1, 3, 5, 7, 9, 11, 13, 15};
        int n = sizeof(arr) / sizeof(arr[0]);
        int key = 7;
        int result;
    
        clock_t start, end;
        double time_taken;
    
        start = clock();
        result = binarysearch(arr, n, key);
        end = clock();
    
        time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    
        if (result != -1)
            printf("Element found at index %d\n", result);
        else
            printf("Element not found\n");
    
        printf("Time taken: %f seconds\n", time_taken);
    }
