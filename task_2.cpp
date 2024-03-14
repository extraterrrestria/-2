#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<string> stringSet;

    string operation, word;
    cin >> operation;

    while (operation != "#") {
        cin >> word;
        if (operation == "+") {
            stringSet.insert(word);
        }
        else if (operation == "-") {
            stringSet.erase(word);
        }
        else if (operation == "?") {
            if (stringSet.count(word) > 0) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }
        cin >> operation;
    }

    return 0;
}
