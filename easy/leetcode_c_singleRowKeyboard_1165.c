#include <stdio.h>
#include <string.h>

int calculateTime(char* keyboard, char* word) {

    int index = 0, time, total = 0, sum = 0;

    int keyboard_len = strlen(keyboard);
    int word_len = strlen(word);

    for (int i = 0; i < word_len; i++)
    {
        for (int j = 0; j < keyboard_len; j++)
        {
            if (word[i] == keyboard[j])
            {
                index = abs(j - index);
                total += index;
                index = j;
            }


        }
        sum += total;
        total = 0;

    }

    return sum;

}

int main()
{
    char keyboard[27];
    char word[27];

    int output;
    scanf("%s", keyboard);
    scanf("%s", word);
    output = calculateTime(keyboard, word);

    printf("%d", output);
    
    return 0;
}