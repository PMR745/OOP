#include <iostream>
using namespace std;

class publication {
    char title[20];
    float price;
    public:
        void read() {
            cout << "\nEnter the Title of the Publication: ";
            cin >> title;
            cout << "\nEnter the price of Publication: ";
            cin >> price;
        }
        void show() {
            cout << "\nTitle is " << title;
            cout << "\nPrice is " << price;
        }
};

class book:public publication {
    int page_count;
    public:
        void read() {
            cout << "\nEnter the page count of Book: ";
            cin >> page_count;
        }
        void show() {
            cout << "\nPage count of Book is " << page_count;
        }
};

class tape: public publication {
    float playing_time;
    public:
        void read() {
            cout << "\nEnter playing time in minutes: ";
            cin>> playing_time;
        }
        void show() {
            cout << "\nPlaying time in minutes is " << playing_time;
        }
};

int main() {
    publication *ptr;
    publication p;
    p.read();
    p.show();

    book b;
    ptr = &b;
    ptr->read();
    ptr->show();

    tape t;
    ptr = &t;
    ptr->read();
    ptr->show();

}