#include <stdio.h>
#include <string.h>

int mostWordsFound(char** sentences, int sentencesSize) {
    int count = 0;
    int sum = 0;

    for (int i = 0; i < sentencesSize; i++)
    {
        int size = strlen(sentences[i]);
        for (int j = 0; j < size; j++)
        {
            if (sentences[i][j] == ' ')
                count++;
        }
        if (count >= sum)
            sum = count;
        count = 0;
    }
    return sum + 1;

}

int main()
{
	return 0;
}