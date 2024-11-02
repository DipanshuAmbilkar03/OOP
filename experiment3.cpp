#include <iostream>
#include <string>
using namespace std;

class publication {
    private:
        string title;
        float price;

    public:
        void add() {
            cout << "Enter the title of the publication: ";
            cin.ignore();
            getline(cin, title);
            cout << "Enter the price of the publication: ";
            cin >> price;
        }

        void display() const {
            cout << "Title of the publication: " << title << endl;
            cout << "Price of the publication: $" << price << endl;
        }
};

class book : public publication {
    private:
        int page_count;

    public:
        void add_book() {
            add();
            cout << "Enter the total pages of the book: ";
            
            try {
                cin >> page_count;
                if (page_count <= 0) {
                    throw "Invalid page count!";
                }
            } catch (const char* err) {
                cout << "Error: " << err << endl;
                page_count = 0;
            }
        }

        void display_book() const {
            display();
            cout << "Page count: " << page_count << endl;
        }
};

class tape : public publication {
    private:
        float playtime;

    public:
        void add_tape() {
            add();
            cout << "Enter playtime duration (in minutes): ";
            
            try {
                cin >> playtime;
                if (playtime <= 0) {
                    throw "Invalid playtime!";
                }
            } catch (const char* err) {
                cout << "Error: " << err << endl;
                playtime = 0;
            }
        }

        void display_tape() const {
            display();
            cout << "Playtime: " << playtime << " minutes" << endl;
        }
};

int main() {
    book books[10];
    tape tapes[10];
    int book_count = 0, tape_count = 0;
    int choice;

    do {
        cout << "\nMenu:\n";
        cout << "1. Add Book\n";
        cout << "2. Add Tape\n";
        cout << "3. Display Books\n";
        cout << "4. Display Tapes\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                books[book_count].add_book();
                book_count++;
                break;
            case 2:
                tapes[tape_count].add_tape();
                tape_count++;
                break;
            case 3:
                for (int i = 0; i < book_count; i++) {
                    cout << "\nBook " << (i + 1) << " Details:\n";
                    books[i].display_book();
                }
                break;
            case 4:
                for (int i = 0; i < tape_count; i++) {
                    cout << "\nTape " << (i + 1) << " Details:\n";
                    tapes[i].display_tape();
                }
                break;
            case 5:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}
