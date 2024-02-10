#include <stdio.h>


/*
    Count-Candidate Algorithm
    Time complexity: O(n)
*/

int majorityElement(int* nums, int numsSize) {
    int count = 0;
    int candidate = 0;
    for (int i = 0; i < numsSize; i++) {
        if (count == 0) {
            candidate = nums[i];
        }

        if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }    
    }
    return candidate;
}

int main() {
    int nums[] = {3, 2, 3};
    int numsSize = 3;
    printf("%d\n", majorityElement(nums, numsSize));
    return 0;
}

