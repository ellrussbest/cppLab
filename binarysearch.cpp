#include <iostream>

using namespace std;

bool binarysearch(int n, int arr[], int start, int end) {
    int mid = (start + end) / 2;

    if ( end >= start ) {
        if (arr[mid] == n ) return true;
        else if(n > arr[mid]) return binarysearch(n, arr, mid+1, end);
        else if(n < arr[mid]) return binarysearch(n, arr, start, mid-1);
        else return false;
    }

    return false;

}

int main () {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 99;
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << binarysearch(n, arr, 0, size-1);
    return 0;
}
