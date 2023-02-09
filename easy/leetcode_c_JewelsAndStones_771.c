#include <stdio.h>
#include <string.h>

int numJewelsInStones(char* jewels, char* stones) {
    int count = 0, sum = 0;

    int jewels_len = strlen(jewels);
    int stones_len = strlen(stones);

    for (int i = 0; i < jewels_len; i++)
    {
        for (int j = 0; j < stones_len; j++)
        {
            if (jewels[i] == stones[j])
            {
                count++;
            }
        }
        sum += count;
        count = 0;


    }

    return sum;

}

int main()
{

    char jewels[51];
    char stones[51];

    int output;
    scanf("%s", jewels);
    scanf("%s", stones);
    output = numJewelsInStones(jewels, stones);

    printf("%d", output);



    return 0;
}