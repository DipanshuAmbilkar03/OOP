#include <iostream>
#include <cstring> 
#include <studio.h>
using namespace std;

class publication {
    private:
        String title;
        float price;
    
    public :
    void add() {
        cout<<"Enter the publication.";
        cout<<"enter the title of the publication.";

        cin.ignore();
        getline(cin,title);
        cout<<"enter the price of the publication.";

        cin>>price;
    }

    void display() {
        cout<<"title of the publication :"<<title;
        cout<<"price of the publication :"<<price;
    }
};

class book :: public publication {
    private :
    int page_count;

    public :
    void add_book() {
        add();
        cout<<"enter the total page of the Book";
        cin>>page_count;
    
    if(page_conut <= 0) {
        throw page_count;
        }
        catch(err) {
            cout<<"error";            
        }

    page_count = 0;    
    }

    void display_book() {
        display();
        cout<<"page count";
        page_count;
    }
}

class tape :: public publication {
    private :
    float playtime;
    public:
    void add_tape() {
        cout<<"enter duration";
        cin>>play_tape;

        if(playtime <= 0 ){
            throw playtime;
        }
        catch(err) {
            cout<<err;
        }

        display();
    }
}


int main() {
    book b1[10];
    tape t1[10];

    int ch,b_count = 0, t_count = 0;

    cout<<"add info of book";
    cout<<"add info of tape";
    cout<<"display info of book";
    cout<<"dispaly info of tape";

    b1[b_count].add_book();
    b_count++;

    t1[b_count].add_tape();
    t_count++;

    for(int i=0; i<t_count;i++) {
        t2[j].display();    
    }
    
}