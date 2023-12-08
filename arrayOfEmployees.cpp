#include <iostream>
using namespace std;

int main(){
    struct employee{
    string first_name;
    string last_name;
    string ID;
    string email;
    string phone_number;
    string salary;
    string manager;
  };

  int numberOfEmployees;
  cout << "Enter how many employees you want to add: ";
  cin >> numberOfEmployees;

  employee* staffDB = new employee[numberOfEmployees];
  cout << "\n";
  for(int i = 0; i < numberOfEmployees; i++){
    cout << "Enter employee number " << i + 1 << endl;
    cout << "Enter first name: ";
    cin >> staffDB[i].first_name;
    cout << "Enter last name: ";
    cin >> staffDB[i].last_name;
    cout << "Enter ID: ";
    cin >> staffDB[i].ID;
    cout << "Enter email: ";
    cin >> staffDB[i].email;
    cout << "Enter phone number: ";
    cin >> staffDB[i].phone_number;
    cout << "Enter salary: ";
    cin >> staffDB[i].salary;
    cout << "Enter manager: ";
    cin >> staffDB[i].manager;
    cout << "\n";
  }
  
  for(int i = 0; i < numberOfEmployees; i++){
    cout << staffDB[i].first_name << " " << staffDB[i].last_name << "\t" << staffDB[i].ID << endl;
  }

  return 0;
}