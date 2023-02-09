#include <stdio.h>

char* removeVowels(char* s)
{
	int j = 0;
	for (int i = 0; s[i] != '\0'; i++)
	{
		switch (s[i])
		{
			case 'a':
				break;
			case 'e':
				break;
			case 'i':
				break;
			case 'o':
				break;
			case 'u':
				break;
			default:
			{
				s[j++] = s[i];
				break;
			}
		}
	}
		s[j] = '\0';

		return s;

}

int main()
{
	char s[1001];
	char* output;
	scanf("%s", s);
	output =  removeVowels(s);

	for(int i =0; output[i] != '\0';i++)
	printf("%c", output[i]);

	return 0;
	
}