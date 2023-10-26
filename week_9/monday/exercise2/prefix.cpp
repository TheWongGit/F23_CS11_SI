#include <iostream>
using namespace std;

int main() {
    string word1, word2;
    cout << "Enter two words:" << endl;
    cin >> word1 >> word2;
    cout << "Your words have " << prefix(word1, word2);
    cout << " character shared prefix." << endl;
}