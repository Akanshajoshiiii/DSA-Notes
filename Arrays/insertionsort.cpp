#include <iostream>

void insertionSort(int arr[], int length) {
    for (int i = 1; i < length; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int nums[] = {23, 112, 2, 5, -1, -13, 45, 78, -2, 64, 53, 25};
    int length = sizeof(nums) / sizeof(nums[0]);

    insertionSort(nums, length);

    for (int i = 0; i < length; i++) {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
