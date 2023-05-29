#include <stdio.h>

int main() {
    int n;
    printf("Введіть кількість елементів у масиві: ");
    scanf("%d", &n);

    int a[n];
    int i;
    int sum = 0;

    printf("Введіть %d елементів масиву:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] % 5 == 0) {
            sum += a[i];
        }
    }

    printf("Сума елементів масиву, які кратні 5: %d\n", sum);

    return 0;
}
