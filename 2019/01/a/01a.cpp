#include <iostream>
#include <algorithm>
using namespace std;

long long total_fuel;
int TC, M, fuel;

int main() {
	cin >> TC;
	for(int z = 1; z <= TC; z++) {
		cin >> M;
		fuel = M / 3;
		fuel -= 2;
		total_fuel += fuel;
		cout << M << " " << fuel << endl;
	}
	cout << total_fuel << endl;
}


