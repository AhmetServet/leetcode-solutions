#include <stdio.h>

void rotate(int* nums, int numsSize, int k) {
    int temp[numsSize];
    for (int i = 0; i < numsSize; i++) {
        temp[(i + k) % numsSize] = nums[i];
    }
    for (int i = 0; i < numsSize; i++) {
        nums[i] = temp[i];
    }
}

int main() {
    int nums[] = {1, 2, 3, 4, 5, 6, 7};
    int numsSize = 7;
    int k = 3;
    rotate(nums, numsSize, k);

    for (int i = 0; i < numsSize; i++) {
        printf("%d ", nums[i]);
    }
    
    return 0;
}