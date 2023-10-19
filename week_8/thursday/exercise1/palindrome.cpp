#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    string word;
    getline(cin, word);
    string perfect_word;
    int count = 0;
    bool isPalindrome = true;
    for (int i = 0; i < word.size(); i++) {
        if (word[i] >= 'A' && word[i] <= 'Z') {
            perfect_word += word[i] + 32;
        }
        else if (word[i] >= 'a' && word[i] <= 'z') {
            perfect_word += word[i];
        }

    }

    for (int i = 0; i < round(perfect_word.size() / 2.0); i++){
        if (perfect_word[i] != perfect_word[perfect_word.size()- (1 + i)]){
            isPalindrome = false;
        }
    }
    cout << boolalpha;
    cout << isPalindrome << endl;
}