#include<stdio.h>

int main(void){

    int i,sum = 0;
    scanf("%d",&i);

    for(int j = 1; j <= i; j++){
        sum += j;
        if(sum >= i){
            printf("%d",sum);
            break;
        }

    }


    return 0;
}