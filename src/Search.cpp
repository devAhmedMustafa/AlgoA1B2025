//
// Created by Ahmed Mustafa on 10/30/2025.
//

#include "Search.h"

int Search::recursiveBinarySearch(int arr[], int left, int right, int target) {
    if (left > right) {
        return -1;
    }

    const int mid = left + (right - left) / 2;
    if (arr[mid] == target) {
        return mid;
    }if (arr[mid] > target) {
        return recursiveBinarySearch(arr, left, mid - 1, target);
    }

    return recursiveBinarySearch(arr, mid + 1, right, target);
}

int Search::recursiveBinarySearch(int arr[], int size, int target) {
    return recursiveBinarySearch(arr, 0, size - 1, target);
}