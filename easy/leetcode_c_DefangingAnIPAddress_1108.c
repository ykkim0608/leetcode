#include <stdio.h>
#include <stdlib.h>


    char* defangIPaddr(char* address) {
        int k = 0;
        char* result = malloc(strlen(address) +7);
        for (int i = 0; address[i] != '\0'; i++)
        {
            if (address[i] == '.')
            {
                result[k++] = '[';
                result[k++] = '.';
                result[k++] = ']';
            }
            else
            {
                result[k++] = address[i];
            }

        }
        result[k] = '\0';

        return result;

    }


int main()
{
  
    char address[] = "1.1.1.1";

    char* output;
    output = defangIPaddr(address);

    for (int i = 0; output[i] != '\0'; i++)
    {
        printf(" %c", output[i]);
    }
}