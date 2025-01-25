// #include <stdio.h>

// void countingSort(int arr[], int n, int output[]) {
//     int max = arr[0];
//     for (int i = 1; i < n; i++) {
//         if (arr[i] > max)
//             max = arr[i];
//     }


//     int count[max + 1];
//     for (int i = 0; i <= max; ++i) {
//         count[i] = 0;
//     }


//     for (int i = 0; i < n; ++i) {
//         count[arr[i]]++;
//     }
//     for (int i = 1; i <= max; ++i) {
//         count[i] += count[i - 1];
//     }

//     for (int i = n - 1; i >= 0; i--) {
//         output[count[arr[i]] - 1] = arr[i];
//         count[arr[i]]--;
//     }
// }

// int main() {
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     int output[n];

//     countingSort(arr, n, output);

//     for (int i = 0; i < n; ++i) {
//         printf("%d ", output[i]);
//     }
//     printf("\n");

//     return 0;
// }