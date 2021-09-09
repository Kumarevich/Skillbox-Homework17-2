#include <iostream>

void revers(int* pArr) {
    int temp;
    for (int i = 0; i < 5; ++i) {
        temp = *(pArr + i);
        *(pArr + i) = *(pArr + 9 - i);
        *(pArr + 9 - i) = temp;
    }
    for (int i = 0; i < 10; ++i) {
        std::cout << *(pArr + i) << " ";
    }
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    revers(arr);
    return 0;
}
