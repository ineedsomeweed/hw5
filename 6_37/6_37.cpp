#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>
#include <stdio.h>
using namespace std;


int binary_search(const vector<int>& data, int key) {
    int low = 0;
    int high = data.size() - 1;
    while (low <= high) {
        int mid = int((low + high) / 2);
        if (key == data[mid])
            return mid;
        else if (key > data[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {

    int size = 10;
    vector<int> data(10);
    //int data[5];
    for (int i = 0; i < size; i++) {
        cout << "Enter a number: ";
        cin >> data[i];
    }

    // Print the array elements 
    cout << "The array elements are: ";
    for (int i = 0; i < size; i++) {
        cout << data[i] << " ";
    }
    printf("\n");


    //vector<int> data = { 1, 9, 2, 7, 4, 10, 3, 8, 5, 6 };
    int key = 7;

    sort(data.begin(), data.end());
    cout << "minimum : " << data[0];

    /*int ret = binary_search(data, key);
    if (ret == -1)
        cout << "Element is not present in array\n";
    else
        cout << "Element is present at index " << ret << "\n";*/
}