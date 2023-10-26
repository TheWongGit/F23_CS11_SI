#include <iostream>
using namespace std;

string digit_to_bar (int num){
  const string ONE = ":::||";
  const string TWO = "::|:|";
  const string THREE = "::||:";
  const string FOUR = ":|::|";
  const string FIVE = ":|:|:";
  const string SIX = ":||::";
  const string SEVEN = "|:::|";
  const string EIGHT = "|::|:";
  const string NINE = "|:|::";
  const string ZERO = "||:::";
  string bar;
  switch(num) {
  case 1:
    bar = ONE;
    break;
  case 2:
    bar = TWO;
    break;
  case 3:
    bar = THREE;
    break;
  case 4:
    bar = FOUR;
    break;
  case 5:
    bar = FIVE;
    break;
  case 6:
    bar = SIX;
    break;
  case 7:
    bar = SEVEN;
    break;
  case 8:
    bar = EIGHT;
    break;
  case 9:
    bar = NINE;
    break;
  case 0:
    bar = ZERO;
    break;
  }
  return bar;
}

int main() {
  
  string bar;
  int digit, zip, check, sum = 0;

  cout << "Enter your zip code: ";
  cin >> zip;

  for (int i = 0; i < 5; i++) {
    digit = zip % 10;
    sum += digit;
    bar = digit_to_bar(digit) + bar;
    zip /= 10;
  }

  check = !(sum % 10) ? 0 : 10 - sum % 10;
  bar += digit_to_bar(check);

  cout << "|" << bar << "|\n";

  return 0;
}