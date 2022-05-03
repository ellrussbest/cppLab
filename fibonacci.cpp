#include <iostream>
#include <sstream>

using namespace std;

int main () {
    string z;
    int x = 0;
    int y = 1;
    int n = 5;
    int ans = x + y;

    if (n > 0) z = "1";

    for (int i = 1; i < n; i++){
       stringstream ss;
       string m;
       ss<<ans;
       ss>> m;
       z = z + m;
       x = y;
       y = ans;
       ans = x + y;
    }

    cout << z;
    return 0;
}
