#include <stdio.h>

int main() {
    int n, count = 0, sum = 0, max = 0, max_index = 0;
    printf("Введіть розмір масиву: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Введіть %d-й елемент: ", i+1);
        scanf("%d", &arr[i]);
        if (arr[i] > 5) {
            count++;
        }
        if (arr[i] > max) {
            max = arr[i];
            max_index = i;
        }
    }
    for (int i = max_index+1; i < n; i++) {
        sum += arr[i];
    }
    printf("Кількість елементів масиву, більших за число 5: %d\n", count);
    printf("Сума елементів масиву, розташованих після максимального елемента: %d\n", sum);
    return 0;
}
