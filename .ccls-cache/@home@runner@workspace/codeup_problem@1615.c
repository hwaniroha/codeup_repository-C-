// #include <stdio.h>


// int self(int num) {
//     int i;
//     for(i = 1; i<=num; i++)
//     {
//         int temp_a = i;
//         int temp_b = 0;
//         while(temp_a > 0)
//         {
//             temp_b +=temp_a%10;
//             temp_a/=10;
//         }
//         if(temp_b + i == num)
//             return 0;
//     }
//     return num;
// }


// int main(void)
// {
//     int a,b;
//     int sum = 0;
//     scanf("%d %d",&a,&b);

//     for(a; a<=b; a++)
//     {
//         sum +=self(a);
//     }

//     printf("%d",sum);
//     return 0;
// }