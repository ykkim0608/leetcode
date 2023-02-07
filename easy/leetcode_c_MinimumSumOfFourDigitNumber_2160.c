#include <stdio.h>



int minimumSum(int num) {

    int digit = num;
    int temp[4],i=0;
    int temp1;

    while (digit != 0)
    {
        temp[i] = digit % 10;
        digit = digit / 10;
        i++;
    }

    for (int j = 0; j < 4; j++)
    {
        for (int k = j + 1; k < 4; k++)
        {
            if (temp[j] > temp[k])
            {
                temp1 = temp[j];
                temp[j] = temp[k];
                temp[k] = temp1;
            }
        }
    }

    int num1 = temp[0] * 10 + temp[2];
    int num2 = temp[1] * 10 + temp[3];

    int sum = num1 + num2;
    return sum;

}
int main()
{
 
    int input, output;

     scanf("%d",&input);

    output = minimumSum(input);

    printf("%d", output);

    return 0;
}