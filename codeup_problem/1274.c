// #include <stdio.h>
// #include <math.h>

// int checkprime(int number) {
//     if (number <= 1) {
//         return 0;
//     }
//     if (number == 2) {
//         return 1; 
//     }
//     if (number % 2 == 0) {
//         return 0; 
//     }
//     for (int i = 3; i <= sqrt(number); i += 2) {
//         if (number % i == 0) {
//             return 0; 
//         }
//     }
//     return 1;
// }

// int main() {
//     int number;
//     scanf("%d", &number);

//     if (checkprime(number)) {
//         printf("prime\n");
//     } else {
//         printf("not prime\n");
//     }

//     return 0;
// }
