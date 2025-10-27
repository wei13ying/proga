#include <stdio.h>
#include <stdlib.h>



int main (int argc, char** argv) {
    double arr[10];

    for (int i = 0; i<10; i++) {
        arr[i] = atof(argv[i + 1]);
        printf("%f ", arr[i]);
    }

    double sum = 0;

    for (int i = 0; i < 10; i++){
        sum += arr[i];
    }

    printf("%.2f", sum / 10);
}
