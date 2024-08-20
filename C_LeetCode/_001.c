#include <stdio.h>

// Max Consectutive Ones
int findMaxConsecutiveOnes(int* nums, int numsSize)
{
    int result = 0;
    int maxCons = 0;  

    for (int i = 0; i < numsSize; ++i) {
        if (nums[i] == 1) ++result;
        else {
            if (result > maxCons) maxCons = result;
            result = 0;
        }
    }

    return result > maxCons ? result : maxCons;
}

int main(void)
{
    int nums_1[] = {1, 1, 0, 1, 1, 1};
    int res_1 = findMaxConsecutiveOnes(nums_1, 6);
    printf("Result 1: %d\n", res_1);

    int nums_2[] = {1, 0, 1, 1, 0, 1};
    int res_2 = findMaxConsecutiveOnes(nums_2, 6);
    printf("Result 2: %d\n", res_2);

    return 0;
}
