#include <iostream>

void swapFirstWithMinEven(int a[], int n) {
    if (n < 2) {
        std::cout << "Масив має бути мінімум розміру 2 для виконання операції." << std::endl;
        return;
    }

    int minEven = -1;
    int minEvenIndex = -1;

    for (int i = 0; i < n; ++i) {
        if (a[i] % 2 == 0) {
            if (minEven == -1 || a[i] < minEven) {
                minEven = a[i];
                minEvenIndex = i;
            }
        }
    }

    if (minEvenIndex != -1) {
        int temp = a[0];
        a[0] = minEven;
        a[minEvenIndex] = temp;
    }
}

template <typename T>
void swapFirstWithMinEven(T a[], int n) {
    if (n < 2) {
        std::cout << "Масив має бути мінімум розміру 2 для виконання операції." << std::endl;
        return;
    }

    int minEven = -1;
    int minEvenIndex = -1;

    for (int i = 0; i < n; ++i) {
        if (a[i] % 2 == 0) {
            if (minEven == -1 || a[i] < minEven) {
                minEven = a[i];
                minEvenIndex = i;
            }
        }
    }

    if (minEvenIndex != -1) {
        T temp = a[0];
        a[0] = minEven;
        a[minEvenIndex] = temp;
    }
}

int main() {
    int a[] = { 3, 8, 12, 5, 2, 10 };
    int n = sizeof(a) / sizeof(a[0]);

    swapFirstWithMinEven(a, n);

    for (int i = 0; i < n; ++i) {
        std::cout << a[i] << " ";
    }

    return 0;
}
