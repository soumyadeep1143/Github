#include <stdio.h>
int main() {
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    printf("Multiplication Table for %d:\n", num);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

}
