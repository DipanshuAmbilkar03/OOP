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
        : name(name), dob(dob), telephone_number(telephone_number) {}

    bool operator<(const personal_record &other) const {
        return name < other.name;
    }

    bool operator==(const personal_record &other) const {
        return name == other.name;
    }
};

void display(const vector<personal_record> &records) {
    for (const auto &record : records) {
        cout << "Name: " << record.name << ", DOB: " << record.dob << ", Telephone: " << record.telephone_number << endl;
    }
}

int main() {
    vector<personal_record> records;
    records.push_back(personal_record("onyx", "1987-03-15", "9876543210"));
    records.push_back(personal_record("riya", "1992-07-22", "9123456789"));
    records.push_back(personal_record("zich", "1990-11-30", "9988776655"));
    records.push_back(personal_record("binod", "1985-12-25", "9765432101"));

    cout << "Records before sorting:" << endl;
    display(records);

    sort(records.begin(), records.end());

    cout << "Records after sorting:" << endl;
    display(records);

    string search_name = "mahi";
    personal_record search_record(search_name, "", "");
    bool found = binary_search(records.begin(), records.end(), search_record);

    if (!found) {
            cout << "Name not found in records." <<endl;
    } else {
        cout << "Name found in records." << endl;
    }

    search_name = "rahul";
    search_record = personal_record(search_name, "", "");
    found = binary_search(records.begin(), records.end(), search_record);

    if (!found) {
        cout << "Name not found in records." << endl;
    } else {
        cout << "Name found in records." << endl;
    }
    return 0;


}

