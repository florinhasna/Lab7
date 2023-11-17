#include <iostream>
using namespace std;

void reverse(char s[], int size);

int main(){
  char name[] = "Harry";
  cout << "Name is " << name << "\n";
  reverse(name, 5);
  return 0;
}

void reverse(char s[], int size){
  int index_of_last = size - 1; 
  for(int i = 0; i <= index_of_last; i++){
    // save the first char
    char temp = s[i];
    // replace it with the last
    s[i] = s[index_of_last];
    //replace the last to first
    s[index_of_last] = temp;
    
    index_of_last--;
  }

  cout << "Reverse is " << s << "\n";
}
