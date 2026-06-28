#include <string>
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main() {

    string line;
    getline(cin, line);

    stringstream ss(line);
    string word;
    vector<string> words;

    while (ss >> word) {
        words.push_back(word);
    }

    string first = words.front();
    string endw = words.back();

    cout << first << "\n" << endw;

    return 0;
}