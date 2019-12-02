#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;

long long calibration;
int TC, F[1000];
map<long long, int> seen;
vector<int> fs;

int main() {
	cin >> TC;
	seen[0] = 1;
	for(int z = 1; z <= TC; z++)
		cin >> F[z-1];
	int i = 0;
	while(seen[calibration] < 2) {
		calibration += F[i];
		seen[calibration]++;
		cout << F[i] << " " << seen[calibration] << " " << calibration << endl;
		i = (i + 1) % TC;
	}
}

	
