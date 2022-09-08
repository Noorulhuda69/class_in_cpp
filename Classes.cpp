// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class book {
private:
    string name;
    string author;
public:
    
    int date;
    char gender;
    void setdata(string a1, string b1);
    void getdata() {
        cout << "name is " << name << endl;
        cout << "author is " << author << endl;
        cout << "date is " << date << endl;
        cout << "gender is " << gender << endl;

    };
}
void book :: setdata(string a1, string b1) {
    name = a1;
    author = b1;
}
int main()
{
    book b;
    b.date = 12;
    b.gender = 'm';
    b.setdata("code with us", "Sheikh Sahab");
    b.getdata();
    system("pause > 0");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
