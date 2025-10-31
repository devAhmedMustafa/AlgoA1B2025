//
// Created by Ahmed Mustafa on 10/30/2025.
//

#ifndef FIBONACCISERIES_H
#define FIBONACCISERIES_H



class FibonacciSeries {

private:
    static void matrixMultiplication(int F[2][2], int M[2][2]);
    static void matrixPower(int F[2][2], int n);

public:
    static int recursive(int n);
    static int divideAndConquer(int n);
    static int iterative(int n);
};



#endif //FIBONACCISERIES_H
