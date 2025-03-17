#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];

    // Read input numbers
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    char combined[1000] = ""; // Buffer to store concatenated number as a string
    char temp[20]; // Temporary buffer for individual numbers

    // Concatenate numbers into a single string
    for (int i = 0; i < n; i++) {
        sprintf(temp, "%d", a[i]); // Convert number to string
        strcat(combined, temp); // Append to combined string
    }

    // Check if the concatenated string is a palindrome
    int len = strlen(combined);
    int isPalindrome = 1; // Flag to check if it's a palindrome

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
