/*Write a C++ program that creates an output file, writes information to it, closes the file, open it 
again as an input file and read the information from the file. */

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file;

    file.open("sample.txt", ios::out);
    if (!file) {
        cout << "File could not be created or opened for writing!" << endl;
        return 1;
    }

    file << "this is new data in sample.txt file.";
    file.close();

    file.open("sample.txt", ios::in);
    if (!file) {
        cout << "File could not be opened for reading!" << endl;
        return 1;
    }

    char ch;
    cout << "File content: ";
    while (file >> ch) { 
        cout << ch;
    }

    file.close();
    return 0;
}
