#include <iostream>
using namespace std;

int prefix (string word1, string word2) {
    int count = 0;
    int length;
    if (word1.size() >= word2.size()){
        length = word1.size();
    }
    else {
        length = word2.size();
    }
    for (int i = 0; i <= length && word1[count] == word2[count] ; i++) {
        count++;
    }
    return count;
}

int main() {
    string word1, word2;
    cout << "Enter two words:" << endl;
    cin >> word1 >> word2;
    cout << "Your words have " << prefix(word1, word2);
    cout << " character shared prefix." << endl;
}