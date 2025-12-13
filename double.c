#include <stdio.h>

int double(int x){
    return x * 2;
}

int double(int x){
    if (x > 1000000 || x < -1000000) return 0;
    return x * 2;
}


int main(void){
    int a;
    if (scanf("%d", &a) != 1) return 1;
    printf("%d\n", double(a));
    return 0;
}
