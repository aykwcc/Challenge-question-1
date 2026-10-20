
#include <stdio.h>

void solution2(int X, int Y, int D) {
    printf("%d",( Y - X + D ) / D);
}

void solution1(int X, int Y, int D)
{
    int number = 0;
    for (int i = X ; i < Y; i += D) {
        number ++;
    }
    printf("%d\n", number);
}
int main() {
    int X = 1, Y = 0, D;
    while (X > Y) {
        scanf("%d %d %d", &X, &Y, &D);
    }
    solution1(X, Y, D);
    solution2(X, Y, D);
    return 0;
}