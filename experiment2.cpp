#include <iostream>
#include <cstring> 
using namespace std;

class additionalPersonData {
    char address[20], license[20], insurance[30];
    long contact;
    
public:
    additionalPersonData() {
        strcpy(address, "pune");
        strcpy(license, "onyx@007");
        strcpy(insurance, "XW2Tt46gwF");
        contact = 690254069;
    }

    ~additionalPersonData() {
        cout << "additionalPersonData's destructor has been called. Everything is deleted.\n";
    }

    friend class person; 
};

class person {
    char name[30], DOB[20], blood[20];
    float ht, wt;
    static int count; 
    additionalPersonData* pai;

public:
    person() {
        strcpy(name, "Onyx");
        strcpy(DOB, "12051991");
        strcpy(blood, "O-");
        ht = 5.4;
        wt = 60;
        pai = new additionalPersonData; 
        count++; 
    }

    person(person* p1) {
        strcpy(name, p1->name);
        strcpy(DOB, p1->DOB);
        strcpy(blood, p1->blood);
        ht = p1->ht;
        wt = p1->wt;

        pai = new additionalPersonData; 
        strcpy(pai->address, p1->pai->address);
        strcpy(pai->license, p1->pai->license);
        strcpy(pai->insurance, p1->pai->insurance);
        pai->contact = p1->pai->contact;

        count++; 
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

    void display() const {
        cout << "Name: " << name << endl;
        cout<< "DOB: " << DOB << endl;
        cout << "Blood Group: " << blood << endl;
        cout << "Height: " << ht << endl;
        cout << "Weight: " << wt << endl;
        cout << "Address: " << pai->address << endl;
        cout << "Contact: " << pai->contact << endl;
        cout<< "License: " << pai->license << endl;
        cout << "Insurance: " << pai->insurance << endl;
    }
};

int person::count = 0;

int main() {
    person* p1 = new person;      
    person* p2 = new person(p1);  

    cout << "\nDisplaying default constructor values:\n";
    p1->display();

    cout << "\nDisplaying copy constructor values:\n";
    p2->display();

    int n;
    cout << "\nEnter the total number of records you want to create: ";
    cin >> n;
    cin.ignore();

    person* people = new person[n]; 
    for (int i = 0; i < n; ++i) {
        cout << "\nEnter data for record " << (i + 1) << ":\n";
        people[i].getData();
    }

    cout << "\nDisplaying all records:\n";
    for (int i = 0; i < n; ++i) {
        cout << "\nRecord " << (i + 1) << ":\n";
        people[i].display(); 
    }

    person::showcount(); 

    delete p1;
    delete p2; 
    // dynamic memory 
    delete[] people; 

    return 0;
}
`