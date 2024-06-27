#include <stdio.h>
#include <string.h>

int main() {
    char input_string[100], input_substring[100];
    char input_char;
    char *substring_ptr, *char_ptr;
    int substring_index = -1, char_index = -1;

    
    printf("Enter a string: ");
    fgets(input_string, sizeof(input_string), stdin);
    input_string[strcspn(input_string, "\n")] = '\0'; // Remove newline character if present

    printf("Enter a substring to search: ");
    fgets(input_substring, sizeof(input_substring), stdin);
    input_substring[strcspn(input_substring, "\n")] = '\0'; //newline character check
    printf("Enter a character to search: ");
    scanf(" %c", &input_char);

    // index of substring
    substring_ptr = strstr(input_string, input_substring);
    if (substring_ptr != NULL) {
        substring_index = (int)(substring_ptr - input_string);
    }

    // index of character
    char_ptr = strchr(input_string, input_char);
    if (char_ptr != NULL) {
        char_index = (int)(char_ptr - input_string);
    }

    // Print results
    printf("Index of '%s' in '%s': %d\n", input_substring, input_string, substring_index);
    printf("Index of '%c' in '%s': %d\n", input_char, input_string, char_index);

    return 0;
}

