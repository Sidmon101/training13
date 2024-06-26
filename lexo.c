#include <stdio.h>
#include <string.h>

#define MAX_LEN 100
#define MAX_WORDS 10

int main() {
    char words[MAX_WORDS][MAX_LEN];
    char temp[MAX_LEN];
    int n, i, j;

 
    printf("Enter the number of words: ");
    scanf("%d", &n);

   
    printf("Enter %d words:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%s", words[i]);
    }

    // Sort the array of words
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            // Compare current and next string
            if (strcmp(words[j], words[j + 1]) > 0) {
                // Swap
                strcpy(temp, words[j]);
                strcpy(words[j], words[j + 1]);
                strcpy(words[j + 1], temp);
            }
        }
    }

   
    printf("\nDictionary order words:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}

