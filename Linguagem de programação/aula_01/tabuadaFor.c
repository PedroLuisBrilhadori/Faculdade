#include <stdio.h> 

int main() {
    int num1, num2, num3, num4;

    printf("digite tres números inteiros\n");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    for(int i = 1; i <= 10; i++){
        printf("%d * %d = %d \t|\t %d * %d = %d \n", i, num1, num1 * 1, i, num2, num2 * 1);
    }
    printf("--------------------------------------- \n");
    for(int i = 1; i <= 10; i++){
        printf("%d * %d = %d \t|\t %d * %d = %d \n", i, num3, num3 * 1, i, num4, num4 * 1);
    }
    
    return 0;
}