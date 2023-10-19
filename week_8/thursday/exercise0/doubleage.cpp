#include <iostream>
using namespace std;

int main() {
  unsigned father_age, son_age;
  cin >> father_age 
  
  cin >> son_age;

  int years = father_age - (son_age * 2);
  if (years > 0){
    cout << years << "years ago" << endl;
  }
  else if (years < 0){
    cout << years * -1 << "years in the future"
  }
  else{
    cout << "They are the same age." << endl;
  }
  return 0;
}
