#include <stdio.h>

/*
    Merge-Sorted-Array Algorithm
    Time complexity: O(n)
*/

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {

    int i = m - 1; // last element index
    int j = n - 1; // last element index
    int k = m + n - 1; // whole array index

    // Merge the arrays by comparing elements from the end and placing them in the correct position in nums1
    while(i >= 0 && j >= 0){
        if(nums1[i] >= nums2[j]){
            nums1[k] = nums1[i]; // Place the larger element from nums1 in the merged array
            i--;
        }else{
            nums1[k] = nums2[j]; // Place the larger element from nums2 in the merged array
            j--;
        }
        k--;
    }

    // If there are remaining elements in nums2, copy them to the beginning of nums1
    while(j >= 0){
        nums1[k] = nums2[j];
        j--;
        k--;
    }

}

void main(){
    int nums1[] = {1,2,3,0,0,0};
    int nums2[] = {2,5,6};
    int m = 3;
    int n = 3;

    merge(nums1, 6, m, nums2, 3, n);
    
    for(int i = 0; i < 6; i++){
        printf("%d ", nums1[i]);
    }
    printf("\n");
}