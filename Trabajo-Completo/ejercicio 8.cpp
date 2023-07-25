#include <iostream>
using namespace std;

int main() {
    for (char letra = 'Z'; letra >= 'A'; letra--) {
        for (char c = letra; c >= 'A'; c--) {
            cout << c;
        }
        cout << endl;
    }
    return 0;
}