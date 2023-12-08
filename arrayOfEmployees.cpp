#include <iostream>
using namespace std;

int main(){
    struct employee{
    string first_name;
    string last_name;
    int ID;
    string email;
    string phone_number;
    string salary;
    string manager;
  };

  int numberOfEmployees;
  cout << "Enter how many employees you want to add: " << endl;
  cin >> numberOfEmployees;

  employee* staffDB = new employee[numberOfEmployees];
}