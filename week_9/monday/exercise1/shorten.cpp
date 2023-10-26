/**
Shorten the code while following good coding practices:
1. Lines must be less than or equal to 100 characters 
2. Variables must have descriptive names (you can change these names as long as yours are descriptive)
3. You may use integer literals and string literals
4. Do not put more than one statement on the same line. Aka no
percent1 = count1 / word1.size() * 100; percent2 = count2 / word2.size() * 100;
***You may remove this comment***
*/
#include <iostream>
using namespace std;

double count_vowels (string word){
  int count = 0;
  for (unsigned i = 0; i < word.size(); i++) {
    if (word[i] == 'a' || 
        word[i] == 'e' || 
        word[i] == 'i' || 
        word[i] == 'o' || 
        word[i] == 'u' ||
        word[i] == 'A' || 
        word[i] == 'E' || 
        word[i] == 'I' || 
        word[i] == 'O' || 
        word[i] == 'U'
        ) {
          count++;
    }
  }
  return count;
}

void vowel_percentage (string word){
  double percentage = count_vowels(word) / word.size() * 100;
  cout << "Vowels in " << word  << ": " << percentage << "%" << endl;
}

int main () {
  vowel_percentage("Hello");
  vowel_percentage("World");
  vowel_percentage("Text");
  return 0;
}