//
// Created by Ahmed Mustafa on 10/30/2025.
//

#include "FibonacciSeries.h"

int FibonacciSeries::recursive(const int n) {
    if (n == 0 || n == 1)
        return n;

    return recursive(n - 1) + recursive(n - 2);
}

int FibonacciSeries::divideAndConquer(const int n) {
    if (n == 0)
        return 0;

    int F[2][2] = { {1, 1}, {1, 0} };
    matrixPower(F, n - 1);
    return F[0][0];
}

void FibonacciSeries::matrixPower(int F[2][2], const int n) {
    if (n == 0 || n == 1)
        return;

    int M[2][2] = { {1, 1}, {1, 0} };

    matrixPower(F, n / 2);
    matrixMultiplication(F, F);
    if (n % 2 != 0)
        matrixMultiplication(F, M);
}

void FibonacciSeries::matrixMultiplication(int F[2][2], int M[2][2]) {
    int x = F[0][0] * M[0][0] + F[0][1] * M[1][0];
    int y = F[0][0] * M[0][1] + F[0][1] * M[1][1];
    int z = F[1][0] * M[0][0] + F[1][1] * M[1][0];
    int w = F[1][0] * M[0][1] + F[1][1] * M[1][1];

    F[0][0] = x;
    F[0][1] = y;
    F[1][0] = z;
    F[1][1] = w;
}
