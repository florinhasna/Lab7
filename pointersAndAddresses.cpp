#include <iostream>
using namespace std;

int main(){
  double my_val = 2.4;

  double* ptr_my_val = &my_val;

  cout << "Variable: " << my_val;
  cout << " Address: " << &my_val << "\n";

  cout << "Pointer: " << ptr_my_val
       << " Address: " << &ptr_my_val
       << " Dereference: " << *ptr_my_val << "\n";

  return 0;
}
