#include<iostream>
using namespace std;

int countDistinct(int arr[], int n) {
    int distinctCount = 0;

    for (int i = 0; i < n; i++) {
        bool isDuplicate = false;

        // Check if arr[i] appeared before index i
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = true;
                break;
            }
        }

        if (!isDuplicate) {
            distinctCount++;
        }
    }

    return distinctCount;
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << countDistinct(arr, n);

    return 0;
}