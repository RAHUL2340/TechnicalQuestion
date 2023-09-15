//Problem 3: Find the biggest and smallest number in an array

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int smallest = arr[0];
    int biggest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
        if (arr[i] > biggest) {
            biggest = arr[i];
        }
    }

    cout << "Smallest number: " << smallest << endl;
    cout << "Biggest number: " << biggest << endl;

    return 0;
}