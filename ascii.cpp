#include <iostream>
#include <string>
using namespace std;
int main() {
    string word;
    cout << "Enter a word: ";
    getline(cin, word);
    cout << "ASCII repersation of all given '" << word << "':" << endl;
    for (char c : word) {
        cout << c << ": " << int(c) <<endl;
    }
    return 0;
}
