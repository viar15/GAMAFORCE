#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int main() {
    string input;
    cout << "Masukkan string: ";
    cin >> input;

    vector<int> data;
    string currentData = "";
    bool parsing = false;

    for (char c : input) {
        if (c == '%') {
            parsing = true;
            currentData = "";
        } else if (c == '^' && parsing) {
            data.push_back(stoi(currentData));
            currentData = "";
        } else if (c == '^' && parsing) {
            data.push_back(stoi(currentData));
            currentData = "";
        }else if (c == '&' && parsing) {
            data.push_back(stoi(currentData));
            break;
        } else if (parsing) {
            currentData += c;
        }
    }

    for (size_t i = 0; i < data.size(); ++i) {
        cout << "data[" << i << "] : " << data[i] << endl;
    }

    return 0;
}
