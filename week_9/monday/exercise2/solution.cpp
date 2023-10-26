#include <iostream>
using namespace std;

int prefix(string word1, string word2) {
    int count;
    int length = word1 < word2 ? word1.length() : word2.length();
    for (count = 0; count < length && word1[count] == word2[count]; count++)
    return count;
}
int main() {
    string word1, word2;
    cout << "Enter two words:" << endl;
    cin >> word1 >> word2;
    cout << "Your words have " << prefix(word1, word2);
    cout << " character shared prefix." << endl;
}