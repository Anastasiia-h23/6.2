#include <iostream>

void swapFirstWithMinEvenRecursive(int a[], int n, int currentIndex = 0, int minEven = -1, int minEvenIndex = -1) {
    if (n < 2) {
        std::cout << "Масив має бути мінімум розміру 2 для виконання операції." << std::endl;
        return;
    }

    if (currentIndex == n) {
        if (minEvenIndex != -1) {
            int temp = a[0];
            a[0] = a[minEvenIndex];
            a[minEvenIndex] = temp;
        }
        return;
    }

    if (a[currentIndex] % 2 == 0) {
        if (minEvenIndex == -1 || a[currentIndex] < minEven) {
            minEven = a[currentIndex];
            minEvenIndex = currentIndex;
        }
    }

    swapFirstWithMinEvenRecursive(a, n, currentIndex + 1, minEven, minEvenIndex);
}

int main() {
    int a[] = { 3, 8, 12, 5, 2, 10 };
    int n = sizeof(a) / sizeof(a[0]);

    swapFirstWithMinEvenRecursive(a, n);

    for (int i = 0; i < n; ++i) {
        std::cout << a[i] << " ";
    }

    return 0;
}
