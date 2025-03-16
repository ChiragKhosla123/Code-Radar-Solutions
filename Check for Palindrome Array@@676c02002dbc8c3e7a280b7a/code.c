#include <stdio.h>

int main() {
    int n, t, s, z;
    scanf("%d", &n);

    int a[n]; // Declare the array after reading n

    // Read input numbers
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Combine all numbers into a single large number
    long long combined = 0; 
    for (int i = 0; i < n; i++) {
        int temp = a[i];

        // Find the number of digits in temp
        int multiplier = 1;
        while (multiplier <= temp) {
            multiplier *= 10;
        }

        // Append temp to combined number
        combined = combined * multiplier + temp;
    }

    // Reverse the combined number
    s = 0;
    z = combined;
    while (z > 0) {
        t = z % 10;
        z = z / 10;
        s = s * 10 + t;
    }

    // Check if the reversed number matches the original combined number
    if (s == combined) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
