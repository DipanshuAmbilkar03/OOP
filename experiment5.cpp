#include <iostream>
using namespace std;

int n; 

// Template
template <class T>
void selection(T A[], int n) {
    int i, j, min;
    T temp;

    for (i = 0; i < n - 1; i++) {
        min = i;  
        for (j = i + 1; j < n; j++) {
            if (A[j] < A[min]) {
                min = j;  
            }
        }
    
        temp = A[i];
        A[i] = A[min];
        A[min] = temp;
    }
}

int main() {
    cout << "Selection Sort\n";

    cout << "Enter the number of integer elements: ";
    cin >> n;

    int A[n];
    cout << "Enter the integer elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    selection(A, n);

    cout << "Sorted integer list:\n";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    cout << "Enter the number of float elements: ";
    cin >> n;

    float B[n];
    cout << "Enter the float elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> B[i];
    }
    
    selection(B, n);

    cout << "Sorted float list:\n";
    for (int i = 0; i < n; i++) {
        cout << B[i] << " ";
    }
    cout << endl;

    return 0;
}
