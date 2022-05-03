#include <iostream>
#include <sstream>
#include <map>

using namespace std;

map<int,int>memo;


int fib(int n) {
    if (memo[n]) return memo[n];
    if(n ==2 || n == 1)return 1;
    else return memo[n] = fib(n-2) + fib(n-1);
}

string fibo(int n ) {
    string ans = "";
    int i = 1;
    while (i <= n) {
        string temp;
        int x = fib(i);
        stringstream ss;
        ss<<x;
        ss>>temp;
        ans = ans + temp + " ";
        i++;
    }

    return ans;
}

bool isFib(int n) {
    int i = 1;
    while(true) {
        if (fib(i) == n ) return true;
        else if (fib(i) > n ) return false;
        else i++;
    }
}

int main () {
    cout << fibo(12);
    cout <<endl<<isFib(11) <<endl;
    return 0;
}
