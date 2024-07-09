#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
int main() {
    unordered_map<string, int> stringCount;
    string input;

    cout << "Enter strings (type 'stop' to end):" << endl;

    while (true) {
        getline(cin, input);

        if (input == "stop") {
            break;
        }

        stringCount[input]++;
    }

    cout << "\nString counts:" << endl;
    for (const auto& pair : stringCount) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}
