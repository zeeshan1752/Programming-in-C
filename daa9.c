#include <stdio.h>
#include <string.h>

// Function for brute force pattern matching
void bruteForcePatternMatching(char *text, char *pattern) {
    int n = strlen(text);    // Length of the text
    int m = strlen(pattern); // Length of the pattern

    // Display the input
    printf("Text: %s\n", text);
    printf("Pattern: %s\n\n", pattern);

    int found = 0; // To check if pattern was found at least once

    // Traverse the text and check each substring of length m
    for (int i = 0; i <= n - m; i++) {
        int j;

        // Check for the pattern match at position i
        for (j = 0; j < m; j++) {
            if (text[i + j] != pattern[j]) {
                break; // If characters do not match, break the inner loop
            }
        }

        // If the whole pattern is matched
        if (j == m) {
            printf("✅ Pattern found at index %d\n", i);
            found = 1;
        }
    }

    if (!found) {
        printf("❌ Pattern not found in the text.\n");
    }
}

int main() {
    char text[] = "ABABDABACDABABCABAB";
    char pattern[] = "ABABCABAB";

    // Call the pattern matching function
    bruteForcePatternMatching(text, pattern);

    return 0;
}
