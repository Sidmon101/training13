#include <stdio.h>
#include <string.h>

int main() {
    char words[1000];
    char unique_words[100][50]; 
    int word_count = 0;
    int i, j, is_unique;

    
    printf("Enter words: ");
    fgets(words, sizeof(words), stdin);
    words[strcspn(words, "\n")] = '\0'; // Remove newline character 

    // Token seperate the words
    char *token = strtok(words, " ");
    while (token != NULL) {
        // Check if word is unique
        is_unique = 1;
        for (i = 0; i < word_count; i++) {
            if (strcmp(unique_words[i], token) == 0) {
                is_unique = 0;
                break;
            }
        }
        
        // add to unique_words array
        if (is_unique) {
            strcpy(unique_words[word_count], token);
            word_count++;
        }

        token = strtok(NULL, " ");
    }

    // Print unique words
    printf("Unique words:\n");
    for (i = 0; i < word_count; i++) {
        printf("%s\n", unique_words[i]);
    }

    return 0;
}

