/*Write C++ program using STL for sorting and searching user defined records such as 
personal records (Name, DOB, Telephone number etc) using vector container. */

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

struct personal_record {
    string name;
    string dob;
    string telephone_number;

    personal_record(string name, string dob, string telephone_number)
        : name(name),dob(dob),telephone_number(telephone_number) {}
    
    // {
    //     this->name = name;
    //     this->dob = dob;
    //     this->telephone_number = telephone_number;
    // }

    bool operator<(const personal_record &other) const {
        return name < other.name;
    }

    bool operator==(const personal_record &other) const {
        return name == other.name;
    }
};

void display(const vector<personal_record> &records) {
    for (const auto &record : records) {
        cout << "Name: " << record.name <<","<<" DOB: " << record.dob<<","
            << " Telephone: " << record.telephone_number << endl;
    }
}

int main() {
    vector<personal_record> records;
    records.push_back(personal_record("John Doe", "1990-05-15", "1234567890"));
    records.push_back(personal_record("Jane Smith", "1985-12-25", "0987654321"));

    cout << "Records before sorting:" << endl;
    display(records);

    sort(records.begin(), records.end());

    cout << "Records after sorting:" << endl;
    display(records);

    string search_name = "John Doe";
    personal_record search_record(search_name, "","");
    bool found = binary_search(records.begin(), records.end(), search_record);

    if (!found) {
        cout << "Name not found in records." << endl;
    } else {
        cout << "Name found in records." << endl;
    }

    search_name = "Michael";
    search_record = personal_record(search_name, "", "");
    found = binary_search(records.begin(), records.end(), search_record);

    if (!found) {
        cout << "Name not found in records." << endl;
    } else {
        cout << "Name found in records." << endl;
    }

    return 0;
}
