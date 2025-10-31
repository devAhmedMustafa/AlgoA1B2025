//
// Created by Ahmed Mustafa on 10/30/2025.
//

#ifndef SEARCH_H
#define SEARCH_H



class Search {
    static int recursiveBinarySearch(int arr[], int left, int right, int target);
public:
    static int iterativeSequentialSearch(int arr[], int size, int target);
    static int recursiveSequentialSearch(int arr[], int size, int target);
    static int recursiveBinarySearch(int arr[], int size, int target);
    static int iterativeBinarySearch(int arr[], int size, int target);
};



#endif //SEARCH_H
