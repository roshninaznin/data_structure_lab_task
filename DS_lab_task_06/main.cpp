//--------------

// Take an array of 10 element as an input and search the two elements that gives the sum nearest to zero.

//--------------

#include <iostream>

using namespace std;

int main() {
    int size;
    cout << "Enter the Array Size: ";
    cin >> size;

    if (size < 2) {
        cout << "Array should have at least 2 elements." << endl;
        return 0;
    }

    int arr[size];

    cout << "Enter " << size << " integers: "<<endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int minSum = arr[0] + arr[1];
    int num1 = arr[0], num2 = arr[1];

    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            int sum = arr[i] + arr[j];

            if (sum < minSum) {
                minSum = sum;
                num1 = arr[i];
                num2 = arr[j];
            }
        }
    }

    cout << "The two elements that give the sum nearest to zero are: " << num1 << " and " << num2 << endl;

    return 0;
}
