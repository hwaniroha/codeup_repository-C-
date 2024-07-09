// #include <stdio.h>
// #include <math.h>

// int checkprime(int number) { // 주어진 숫자가 소수인지 확인하는 함수
//     if (number <= 1) { // 1 이하의 숫자는 소수가 아님
//         return 0;
//     }
    
//     if (number == 2) { // 숫자 2는 소수임
//         return 1; 
//     }
//     if (number % 2 == 0) { // 짝수는 2 외에는 소수가 아님
//         return 0; 
//     }
    
//     for (int i = 3; i <= sqrt(number); i += 2) { // 3부터 주어진 숫자의 제곱근까지의 홀수로 나눠서 나머지가 0이면 소수가 아님
//         if (number % i == 0) { // number가 i로 나누어 떨어지면 소수가 아님
//             return 0; 
//         }
//     }
//     return 1;
// }

// int main() {
//     int number; //숫자 입력
//     scanf("%d", &number);

//     if (checkprime(number)) { //함수 결과 출력
//         printf("prime\n");
//     } else {
//         printf("not prime\n");
//     }

//     return 0;
// }