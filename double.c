#include <stdio.h>

int double(int x){
    return x * 2;
}

int main(void){
    int a;
    if (scanf("%d", &a) != 1) return 1;
    printf("%d\n", double(a));
    return 0;
}
