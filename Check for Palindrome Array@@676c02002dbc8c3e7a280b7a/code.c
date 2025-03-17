#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    
    char combined[1000] = ""; // Buffer to store concatenated number as string
    char temp[20]; // Temporary buffer for each number

    // Read input numbers as strings and concatenate with spaces
    for (int i = 0; i < n; i++) {
        scanf("%s", temp); // Read input as string
        if (i > 0) strcat(combined, " "); // Add space between numbers
        strcat(combined, temp); // Append to combined string
    }

    // Check if the concatenated string is a palindrome (including spaces)
    int len = strlen(combined);
    int isPalindrome = 1; // Flag for palindrome check

    for (int i = 0; i < len / 2; i++) {
        if (combined[i] != combined[len - i - 1]) {
            isPalindrome = 0; // Not a palindrome
            break;
        }
    }

    // Print the result
    if (isPalindrome) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
