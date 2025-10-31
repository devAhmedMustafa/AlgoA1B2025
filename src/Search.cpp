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

int Search::iterativeBinarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        const int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;
        }if (arr[mid] > target) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return -1;
}

int Search::iterativeSequentialSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int Search::recursiveSequentialSearch(int arr[], int size, int target) {
    if (size <= 0) {
        return -1;
    }
    if (arr[size - 1] == target) {
        return size - 1;
    }
    return recursiveSequentialSearch(arr, size - 1, target);
}