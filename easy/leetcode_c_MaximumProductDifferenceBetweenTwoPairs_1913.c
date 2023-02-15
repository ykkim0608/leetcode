#include <stdio.h>


int maxProductDifference(int* nums, int numsSize) {
    int min, max;

    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i+1; j < numsSize; j++)
        {
            if (nums[i] > nums[j])
            {
                int tmp = nums[i];
                nums[i] = nums[j];
                nums[j] = tmp;
            }

        }
    }


    min = nums[0] * nums[1];
    max = nums[numsSize - 1] * nums[numsSize - 2];

    return max - min;

}






int main()
{
    int numsSize,input,output;
    scanf("%d", &numsSize);
    int* nums = malloc(sizeof(int) * numsSize);
    for (int i = 0; i < numsSize; i++)
    {
        scanf("%d", &input);
        nums[i] = input;
    }

    output = maxProductDifference(nums, numsSize);

    printf("%d", output);


}