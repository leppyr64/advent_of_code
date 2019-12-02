#include <iostream>
#include <algorithm>
using namespace std;

long long calibration;
int TC, F;

int main() {
	cin >> TC;
	for(int z = 1; z <= TC; z++) {
		cin >> F;
		calibration += F;
		cout << F << " " << calibration << endl;
	}
	cout << calibration << endl;
}


