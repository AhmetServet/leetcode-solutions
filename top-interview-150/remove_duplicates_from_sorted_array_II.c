#include <stdio.h>

/*
    Remove-Duplicates-From-Sorted-Array-II Algorithm
    Time complexity: O(n)

*/

int removeDuplicates(int* nums, int numsSize) {
    if (numsSize <= 2) {
        return numsSize;
    }
    int i = 2;
    for (int j = 2; j < numsSize; j++) {
        if (nums[j] != nums[i - 2]) {
            nums[i] = nums[j];
            i++;
        }
    }
    return i;

    /*
        1 1 1 2 2 3
            i       
            j       nothing to do

        1 1 1 2 2 3
            i       
              j     nums[i] = nums[j] => 1 1 2 2 2 3

        1 1 2 2 2 3
                i   
                j   nothing to do

        1 1 2 2 2 3
                i   
                  j nums[i] = nums[j] => 1 1 2 2 3 3

        1 1 2 2 3 3
                  i = 5
                  j end
          

    */

}

int main() {
    int nums[] = {1, 1, 1, 2, 2, 3};
    int numsSize = 6;
    int result = removeDuplicates(nums, numsSize);
    printf("Result: %d\n", result);
    return 0;
}
