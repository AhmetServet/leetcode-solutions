#include <stdio.h>

/*
    Remove-Element Algorithm
    Time complexity: O(n)
*/

int removeElement(int* nums, int numsSize, int val) {
    int i = 0;
    for (int j = 0; j < numsSize; j++) {
        if (nums[j] != val) {
            // Move the non-deleted element to the front of the array
            nums[i] = nums[j];
            i++;
        }
    }
    return i;
}

void main(){
    int nums[] = {3,2,2,3};
    int val = 3;
    int numsSize = 4;
    int result = removeElement(nums, numsSize, val);
    printf("result: %d\n", result);
}