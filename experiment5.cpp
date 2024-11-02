#include <iostream>
using namespace std;

int n;  // Number of elements to be sorted

// Template for selection sort function
template <class T>
void selection(T A[], int n) {
    int i, j, min;
    T temp;

    for (i = 0; i < n - 1; i++) {
        min = i;  // Set the current index as the minimum
        for (j = i + 1; j < n; j++) {
            if (A[j] < A[min]) {
                min = j;  // Update min if a smaller element is found
            }
        }
        // Swap the elements
        temp = A[i];
        A[i] = A[min];
        A[min] = temp;
    }
}

int main() {
    cout << "Selection Sort\n";

    // Sorting integer elements
    cout << "Enter the number of integer elements: ";
    cin >> n;

    int A[n];
    cout << "Enter the integer elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    // Call selection sort for integer array
    selection(A, n);

    cout << "Sorted integer list:\n";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    // Sorting float elements
    cout << "Enter the number of float elements: ";
    cin >> n;

    float B[n];
    cout << "Enter the float elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> B[i];
    }

    // Call selection sort for float array
    selection(B, n);

    cout << "Sorted float list:\n";
    for (int i = 0; i < n; i++) {
        cout << B[i] << " ";
    }
    cout << endl;

    return 0;
}
