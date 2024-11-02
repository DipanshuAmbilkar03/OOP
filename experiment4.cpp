#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file;

    // Open the file in write mode and add content
    file.open("sample.txt", ios::out);
    if (!file) {
        cout << "File could not be created or opened for writing!" << endl;
        return 1;
    }

    file << "this is new data in sample.txt file.";
    file.close();

    // Open the file in read mode to display content
    file.open("sample.txt", ios::in);
    if (!file) {
        cout << "File could not be opened for reading!" << endl;
        return 1;
    }

    char ch;
    cout << "File content: ";
    while (file >> ch) {  // Read each character
        cout << ch;
    }

    file.close();
    return 0;
}
