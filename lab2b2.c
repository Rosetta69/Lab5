#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20

int main() {
    int arr[N];
    int i, max, sum;

    // ініціалізуємо генератор псевдовипадкових чисел
    srand(time(NULL));

    // заповнюємо масив випадковими числами з відрізка [-100; 100]
    for (i = 0; i < N; i++) {
        arr[i] = rand() % 201 - 100;
    }

    // виводимо елементи масиву на екран
    printf("Масив: ");
    for (i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }

    // знаходимо максимальний елемент масиву
    max = arr[0];
    for (i = 1; i < N; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // знаходимо суму елементів, що розташовані після максимального елемента
    sum = 0;
    for (i = 0; i < N; i++) {
        if (arr[i] == max) {
            break;
        }
    }
    for (i = i + 1; i < N; i++) {
        sum += arr[i];
    }

    // виводимо результати на екран
    printf("\nКількість елементів масиву, більших за число п'ять: ");
    int count = 0;
    for (i = 0; i < N; i++) {
        if (arr[i] > 5) {
            count++;
        }
    }
    printf("%d\n", count);
    printf("Сума елементів масиву, що розташовані після максимального елемента: %d\n", sum);

    return 0;
}
