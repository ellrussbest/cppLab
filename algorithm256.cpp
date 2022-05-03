#include <iostream>
#include <stack>
#include <ctime>
#include <cmath>

using namespace std;

string changeToHex(int x) {
    string hex = "";
    if (x == 0) hex.push_back('0');
    while ( x > 0 ) {
        int y = x % 16;
        if (y <= 9)hex.push_back(y + 48);
        else {
            switch(y) {
                case 10: hex.push_back('A');
                break;
                case 11: hex.push_back('B');
                break;
                case 12: hex.push_back('C');
                break;
                case 13: hex.push_back('D');
                break;
                case 14: hex.push_back('E');
                break;
                case 15: hex.push_back('F');
                break;
            }
        }
        x = x / 16;
    }
    return hex;
}

string algorithm() {
    string me = "";
    srand(time(NULL));

    for (int i = 0; i < 64; i++) {
        int x = rand() % 16;
        me = me + changeToHex(x);
    }

    return me;
}

int main() {
    string x = algorithm();
    cout << x;
    cout << endl << x.length();
    return 0;
}
