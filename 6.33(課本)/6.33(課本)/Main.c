#include <stdio.h>
#define SIZE 15


int binarySearch(int array[], int low, int high, int key) {
    if (low > high) {
        return -1; 
    }

    int middle = low + (high - low) / 2; 

    if (array[middle] == key) {
        return middle; 
    }
    else if (array[middle] > key) {
        return binarySearch(array, low, middle - 1, key); 
    }
    else {
        return binarySearch(array, middle + 1, high, key); 
    }
}

int main() {
    int a[SIZE]; 

    
    for (int i = 0; i < SIZE; i++) {
        a[i] = 2 * i;
    }

    printf("陣列內容: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    int key;
    printf("請輸入要搜尋的數字: ");
    scanf("%d", &key);

  
    int result = binarySearch(a, 0, SIZE - 1, key);

    if (result != -1) {
        printf("%d 出現在索引 %d。\n", key, result);
    }
    else {
        printf("未找到 %d。\n", key);
    }

    return 0;
}
