#include <iostream>
#include <cmath>

using namespace std;

int main () {
	long int x = 0;

	for ( int i = 0; i < 32; i++ ) {
		x = x + pow(2, i);
	}
	cout << x << endl;
	return 0;
}
