#include <iostream>
#include <cmath>

using namespace std;

int main() {
	// taking differen vairable to define 3 sides and 3 angles of a trianlge
	int a, b, c, d, e, f;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	cin >> e;
	cin >> f;
	
	if ((a + b > c && b + c > a && c + a > b) && (d + e + f == 180)) {
		cout << " valid triangle";
	}
	else {
		cout << "not valid";
	}

	return 0;
	
}	