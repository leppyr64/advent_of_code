#include <iostream>
#include <algorithm>
using namespace std;

long long total_fuel;
int TC, M, fuel;

int main() {
	cin >> TC;
	for(int z = 1; z <= TC; z++) {
		cin >> M;
		fuel = 0;
		cout << M << " ";
		while(M > 0) {
			M = M / 3 - 2;
			if(M < 0) M = 0;
			fuel += M;
			cout << M << " ";
		}
		total_fuel += fuel;
		cout << "= " << fuel << endl;
	}
	cout << total_fuel << endl;
}

	
