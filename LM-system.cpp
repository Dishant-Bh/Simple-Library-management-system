// Library Management system for college student
// class will be library
// but objact will be student only

#include <iostream>
#include <string>
using namespace std;

class Library
{
private:
    string student_name;
    string book_name;
    string writter_name;
    int borrow_date, borrow_month;
    int total_page;
    int ret_date, ret_month;
    int student_PIN;

public:
    void read()
    {
        cout << "Enter your name(use '_' instead of spaces): ";
        cin >> student_name;
        cout << "\nEnter Book name(use '_' instead of spaces): ";
        cin >> book_name;
        cout << "\nEnter Writter name(use '_' instead of spaces): ";
        cin >> writter_name;
        cout << "\nEnter borrow date (DD MM): ";
        cin >> borrow_date >> borrow_month;
        cout << "\nEnter total page of the book: ";
        cin >> total_page;
    }
    void display()
    {
        cout << "\nStudent name: " << student_name;
        cout << "\nBook name: " << book_name;
        cout << "\nWritter name: " << writter_name;
        cout << "\nBorrow date and month: " << borrow_date << "-" << borrow_month;
        cout << "\nTotal page of the book: " << total_page;
    }
    void rtrn_back()
    {
        cout << "\n\nYou can take the book only for 30 days";
        cout << "\nEnter the return date (DD MM): ";
        cin >> ret_date >> ret_month;
    }
    void secret()
    {
        cout << "\n\nEnter your 6-digit secret Student PIN: ";
        cin >> student_PIN;
        cout << "Thank you for your time\nYour record is saved";
        cout << "\nPlease retune the book by " << ret_date << "-" << ret_month;
        cout << "\nHave a good day :)";
    }
};
main()
{
    Library student_1;
    student_1.read();
    student_1.display();
    student_1.rtrn_back();
    student_1.secret();
}