#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name;
    int age;
    float marks;
    char grade;
    cout << "Enter student name: ";
     getline(cin, name);
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter marks: ";
    cin >> marks;
    cout << "Enter grade character: ";
    cin >> grade;
    cout << "\nStudent Information:" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Marks: " << marks << endl;
    cout << "Grade: " << grade << endl;
    return 0;
} 