#include <stdio.h>
#include <string.h>

int main()
{
    char input[256];
    int letterCount[26] = {0}; // Array to store the count of each letter initialized to zeros

    printf("Enter text strings (press Enter on an empty line to exit):\n");

    while (1)
    {
        fgets(input, sizeof(input), stdin); // get the input from the user via keyboard

        // Check for an empty line to exit the loop
        if (strlen(input) == 1 && input[0] == '\n')
        {
            break;
        }
        for (int i = 0; i < strlen(input); i++)
        {if ((input[i] >= 'a' && input[i]<= 'z')||(input[i] >= 'A' && input[i]<= 'Z'))
        {
            char c = tolower(input[i]);
            int j = c - 'a';
            letterCount[j]++;
        }   
        }
        

    }
   printf("Letter counts:\n");
    for (int i = 0; i < 26; i++) {
        if (letterCount[i] > 0) {
            printf("%c: %d\n", 'a' + i, letterCount[i]);
        }
    }

    return 0;
}