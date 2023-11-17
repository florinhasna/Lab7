#include<iostream>
using namespace std;

int main(){
  string manager = "Florin";
  string* ptr_manager = &manager;
  
  struct employee{
    string first_name;
    string last_name;
    int ID;
    string email;
    string phone_number;
    string salary;
    string manager;
  };

  employee Alina;
  Alina.first_name = "Alina";
  Alina.last_name = "Bizirca";
  Alina.ID = 00332123;
  Alina.email = "biz.a@outlook.com";
  Alina.phone_number = "07788553421";
  Alina.salary = "£50,000";
  Alina.manager = *ptr_manager;
  
  return 0;
}
