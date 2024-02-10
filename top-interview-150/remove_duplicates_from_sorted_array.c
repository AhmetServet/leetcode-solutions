#include <stdio.h>

/*
    Remove-Duplicates-From-Sorted-Array Algorithm
    Time complexity: O(n)
*/

int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0) {
        return 0;
    }
    
    int i = 0;
    for (int j = 1; j < numsSize; j++) {
        if (nums[j] != nums[i]) {
            i++;
            nums[i] = nums[j];
        }
    }
    return i + 1;
}

void main() {
    int nums[] = {1, 1, 2};
    int numsSize = 3;
    int result = removeDuplicates(nums, numsSize);
    printf("Result: %d\n", result);
}