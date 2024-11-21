#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROLLS 36000

int main() {
    int dice1, dice2;
    int sum;
    int frequency[13] = { 0 }; 

    
    srand(time(NULL));

  
    for (int i = 0; i < ROLLS; i++) {
        dice1 = rand() % 6 + 1;
        dice2 = rand() % 6 + 1; 
        sum = dice1 + dice2;
        frequency[sum]++;
    }

   
    printf("點數和\t次數\t比例\n");
    for (int i = 2; i <= 12; i++) {
        printf("%d\t%d\t%.2f%%\n", i, frequency[i], (frequency[i] / (double)ROLLS) * 100);
    }

    return 0;
}
