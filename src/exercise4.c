#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv) {
    double array[10];
    double x;
    int k;
    for (int i = 0; i < 10; ++i) {
        scanf("%lf", &array[i]);
    }
    if (argc < 3) {
        printf("Use: %s <X> <K>\n", argv[0]);
        return 1;
    }
    sscanf(argv[1], "%lf", &x);
    sscanf(argv[2], "%d", &k);
    if (k < 0 || k >= 10) {
        printf("Incorrect position K\n");
        return 1;
    }
    for (int i = 9; i >= k + 1; i--) {
        array[i] = array[i - 1];
    }
    array[k] = x;
    for (int i = 0; i < 10; ++i) {
        printf("%.0f ", array[i]);
    }
    printf("\n");

    return 0;
}
