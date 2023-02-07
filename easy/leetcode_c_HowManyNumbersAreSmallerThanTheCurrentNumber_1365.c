#include <stdio.h>


int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
    int count = 0;
    int* ans = malloc(sizeof(int)* numsSize);

    for (int i = 0; i < numsSize; i++)
    {
        for (int j = 0; j < numsSize; j++)
        {
            if (i == j || nums[i] <= nums[j])
                continue;
            else
            {
                count++;

            }


        }
        ans[i] = count;
        count = 0;
    }
    *returnSize = numsSize;


    return ans;
}

int main()
{
    int in_nums =0, input =0;
    //int* nums = { 0, };
    //int* output;
    int returnSize;
    int* nums = (int*)malloc(sizeof(int) * in_nums);
    int* output = (int*)malloc(sizeof(int) * in_nums);

    scanf("%d", &in_nums);
    for (int i = 0; i < in_nums; i++)
    {
        scanf("%d", &input);
        nums[i] = input;

    }

    output = smallerNumbersThanCurrent(nums, in_nums, &returnSize);


    printf("[");
    for (int i =0; i<returnSize; i++)
    {
        printf("%d", output[i]);
        if(i != returnSize-1)
        printf(",");
    }
    printf("]\n");
   

    return 0;
}