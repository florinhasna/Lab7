#include<iostream>
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

  employee Florin;
  Florin.first_name = "Florin";
  Florin.last_name = "Hasna";
  string* ptr_manager = &Florin.first_name;
  Florin.ID = 00031470;
  Florin.email = "f.hasna@outlook.com";
  Florin.phone_number = "07899221325";
  Florin.salary = "£100,000";
  Florin.manager = *ptr_manager;

  employee Alina;
  Alina.first_name = "Alina";
  Alina.last_name = "Bizirca";
  Alina.ID = 00332123;
  Alina.email = "biz.a@outlook.com";
  Alina.phone_number = "07788553421";
  Alina.salary = "£50,000";
  Alina.manager = *ptr_manager;

  employee Tikou;
  Tikou.first_name = "Tikou";
  Tikou.last_name = "Hyseni";
  Tikou.ID = 00214353;
  Tikou.email = "t.hys@gmail.com";
  Tikou.phone_number = "07864331232";
  Tikou.salary = "£40,000";
  Tikou.manager = *ptr_manager;
  
  return 0;
}
