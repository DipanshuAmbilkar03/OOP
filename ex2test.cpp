#include <iostream>
#include <cstring> 
using namespace std;

class additionalPersonData {
    char address[20], license[20], insurance[30];
    long contact;
    
public:
    additionalPersonData() {
        strcpy(address, "pune");
        strcpy(license, "name@323");
        strcpy(insurance, "XW2Tt46gwF");
        contact = 235362652;
    }

    ~additionalPersonData() {
        cout << "additionalPersonData's destructor has been called. Everything is deleted.\n";
    }

    friend class person; // Grant `person` class access to private members
};

class person {
    char name[30], DOB[20], blood[20];
    float ht, wt;
    static int count; // Static count variable to track the number of instances
    additionalPersonData* pai;

public:
    person() {
        strcpy(name, "xyz");
        strcpy(DOB, "12051991");
        strcpy(blood, "O-");
        ht = 5.4;
        wt = 60;
        pai = new additionalPersonData; // Allocate memory for additional data
        count++; // Increment count on each new object creation
    }

    person(person* p1) {
        strcpy(name, p1->name);
        strcpy(DOB, p1->DOB);
        strcpy(blood, p1->blood);
        ht = p1->ht;
        wt = p1->wt;

        pai = new additionalPersonData; // Deep copy of additionalPersonData object
        strcpy(pai->address, p1->pai->address);
        strcpy(pai->license, p1->pai->license);
        strcpy(pai->insurance, p1->pai->insurance);
        pai->contact = p1->pai->contact;

        count++; // Increment count for the copied object
    }

    static void showcount() {
        cout << "Number of records counted: " << count << endl;
    }

    ~person() {
        delete pai;
        cout << "Person destructor called.\n";
    }

    void getData() {
        cout << "Enter name: ";
        cin >> name;
        cin.ignore();
        cout << "Enter DOB: ";
        cin >> DOB;
        cin.ignore();
        cout << "Enter blood group: ";
        cin >> blood;
        cin.ignore();
        cout << "Enter weight: ";
        cin >> wt;
        cin.ignore();
        cout << "Enter height: ";
        cin >> ht;
        cin.ignore();
        cout << "Enter address: ";
        cin >> pai->address;
        cin.ignore();
        cout << "Enter contact: ";
        cin >> pai->contact;
        cin.ignore();
        cout << "Enter license: ";
        cin >> pai->license;
        cin.ignore();
        cout << "Enter insurance: ";
        cin >> pai->insurance;
        cin.ignore();
    }

    // Inline function to display data
    void display() const {
        cout << "Name: " << name << "\nDOB: " << DOB << "\nBlood Group: " << blood
            << "\nHeight: " << ht << "\nWeight: " << wt << "\nAddress: " << pai->address
            << "\nContact: " << pai->contact << "\nLicense: " << pai->license
            << "\nInsurance: " << pai->insurance << endl;
    }
};

// Initialization of static count variable
int person::count = 0;

int main() {
    person* p1 = new person;      // Creating the first person object
    person* p2 = new person(p1);   // Copy constructor to create a second person based on p1

    cout << "\nDisplaying default constructor values:\n";
    p1->display();

    cout << "\nDisplaying copy constructor values:\n";
    p2->display();

    int n;
    cout << "\nEnter the total number of records you want to create: ";
    cin >> n;
    cin.ignore();

    person* people = new person[n]; // Dynamic array for `n` people
    for (int i = 0; i < n; ++i) {
        cout << "\nEnter data for record " << (i + 1) << ":\n";
        people[i].getData(); // Getting data for each person in the array
    }

    cout << "\nDisplaying all records:\n";
    for (int i = 0; i < n; ++i) {
        cout << "\nRecord " << (i + 1) << ":\n";
        people[i].display(); // Displaying each person's data
    }

    person::showcount(); // Showing count of `person` objects created

    // Memory cleanup
    delete p1; // Delete p1 object
    delete p2; // Delete p2 object
    delete[] people; // Delete dynamically allocated array of `person` objects

    return 0;
}
