// take a input

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for ( int i = 0; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d", &k);

    int r_arr[n];

    for ( int i = 0; i<k; i++){
        for ( int j = k; j<k; j++ ){
            r_arr[i] = arr[j];
        }
    }
    for ( int i = 0; i<n; i++){
        printf("%d", arr[i]);
    }
    return 0;
}