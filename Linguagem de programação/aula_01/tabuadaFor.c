#include <stdio.h> 

void tabuadaFor() {
    int num1, num2, num3, num4;

    printf("digite tres números inteiros\n");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    for(int i = 1; i <= 10; i++){
        printf("%d * %d = %d \t|\t %d * %d = %d \n", i, num1, num1 * i, i, num2, num2 * i);
    }
    printf("--------------------------------------- \n");
    for(int i = 1; i <= 10; i++){
        printf("%d * %d = %d \t|\t %d * %d = %d \n", i, num3, num3 * i, i, num4, num4 * i);
    }
}

void tabuadaWhile() {
    int num1, num2, num3, num4, i = 1;

    printf("digite tres números inteiros\n");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    while(i < 11){
        printf("%d * %d = %d \t|\t %d * %d = %d \n", i, num1, num1 * i, i, num2, num2 * i);
        i++;
    }
    i = 1;
    printf("--------------------------------------- \n");
    while(i < 11){
        printf("%d * %d = %d \t|\t %d * %d = %d \n", i, num3, num3 * i, i, num4, num4 * i);
        i++;
    }
}

void tabuadaDowhile(){
    int num1, num2, num3, num4, i = 1;

    printf("digite tres números inteiros\n");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    do{
        printf("%d * %d = %d \t|\t %d * %d = %d \n", i, num3, num3 * i, i, num4, num4 * i);
        i++;
    } while(i < 11);
    i = 1;
    printf("--------------------------------------- \n");
    do{
        printf("%d * %d = %d \t|\t %d * %d = %d \n", i, num3, num3 * i, i, num4, num4 * i);
        i++;
    } while(i < 11);
}

int main() {

    tabuadaFor();
    // tabuadaWhile();
    // tabuadaDowhile();

    return 0;
}