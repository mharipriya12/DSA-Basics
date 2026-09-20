#include <iostream>
using namespace std;

int main() {
    int n, key;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cin >> key;

    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key) {
            cout << "Element found at index " << mid;
            return 0;
        }
        else if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }

    cout << "Element not found";

    return 0;
}
