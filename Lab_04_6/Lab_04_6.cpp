#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double P, E;
	int i, k;
	E = 0;
	i = 1;

	while (i <= 15) {
		P = 1;
		k = 1;
		while (k<=i){
			P *= pow(k, 2) + 1;
			k++;
		}
		E += P / (1 + pow(P, 2));
		i++;
	}
	cout << E << endl;

	do {
		P = 1;
		k = 1;
		do {
			P *= pow(k, 2) + 1;
			k++;
		} while (k <= i);

	} while (i <= 15);
	cout << E << endl;

	for (i = 1; i <= 15; i++) {
		for (k = 1; k <= i; k++) {
			P *= pow(k, 2) + 1;
		}
		E += P / (1 + pow(P, 2));
	}
	cout << E << endl;
	
	for (i = 15; i >= 1; i--) {
		for (k = i; k >= i; k--) {
			P *= pow(k, 2) + 1;
		}
		E += P / (1 + pow(P, 2));
	}
	cout << E << endl;
}