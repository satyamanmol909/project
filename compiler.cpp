#include <iostream>
#include <bitset>
#include <string>
using namespace std;
int main() {
    string word;
    cout << "Enter a word: ";
    getline(cin, word);
    cout << "Binary representation of each character in '" << word << "':" << endl;
    for (char c : word) {
        
        
        cout << c << ": " << bitset<8>(c) <<endl;
    }
    return 0;
}
