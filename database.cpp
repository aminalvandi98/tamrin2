#include <iostream>

using namespace std;

vector <Class> Database;

struct Date
{
    unsigned short int Year;
    unsigned short int Month;
    unsigned short int Day;
};
struct Student
{
    string Firstname;
    string Lastname;
    unsigned long long int ID;
    Date Birthday;
    float Grade;
};
struct Class
{
    string ClassName;
    float Average;
    unsigned short int Capacity;
    vector <Student> Data;
};

void Start();
void SelectClass(string);
void AddClass(string);
void RemoveClass(string);
void AddStudent(string, Date, unsigned long int, float);
void RemoveStudent(unsigned long long int);
void Search(unsigned long long int);
void Search(string, string);
void ShowClass(string);
void ShowAll();
void SortByName();
void SortByID();
void Save();


int main ()
{
    Start(); 

    return 0;
}