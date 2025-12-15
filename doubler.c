#include <stdio.h>

int doubler(int x){
    return x * 2;
}


int main(void){
    int a;

    printf("あきと\n");
    printf("ひなた\n");
    printf("しょうご\n");
    printf("えぐち\n");

    if (scanf("%d", &a) != 1) return 1;
    printf("%d\n", doubler(a));
    return 0;
}
