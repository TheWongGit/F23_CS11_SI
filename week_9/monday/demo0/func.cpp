#include <iostream>
#include <cmath>
using namespace std;

// Function definition
int f(int x) {
  return pow(x, 3) - 2 * x + sqrt(x);
}

int main(){
  // Calls the function and tells it to run
  cout << f(4) << endl;
  return 0;
}