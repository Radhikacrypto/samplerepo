#include <iostream>
#include <vector>
using namespace std;

int uniques(vector<int>& arr) {
    int ans = 0;
    for (int i = 0; i < arr.size(); i++) {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main() {
    int size;
    cout << "Enter the size of array, and it should be odd: ";
    cin >> size;

    if (size % 2 == 1) {
        cout << "Enter the elements of the array such that only one is not repeated:" << endl;
        vector<int> arr(size);
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }

        int ans = uniques(arr);
        cout << ans;
    } else {
        cout << "You have entered an even number." << endl;
    }

    return 0;
}