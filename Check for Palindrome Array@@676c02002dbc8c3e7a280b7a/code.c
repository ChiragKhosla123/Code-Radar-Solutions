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

    char combined[1000] = ""; // To store concatenated number as string
    char temp[20]; // Temporary storage for each number

    // Concatenate numbers into a single string
    for (int i = 0; i < n; i++) {
        sprintf(temp, "%d", a[i]); // Convert number to string
        strcat(combined, temp); // Append to the combined
