#include<iostream>
using namespace std;

int main() {
	int A, B, C;
	cin >> A >> B >> C;
	if (A == B && B == C) {
		cout << 10000 + A * 1000;
	}

	else if (B!=C && A==B) {
		cout << 1000 + A * 100;
	}
	
	else if (A!=B && B==C) {
		cout << 1000 + B * 100;
	}
	else if (C!=B && A==C) {
		cout << 1000 + A * 100;
	}

	else {
		int m = max(max(A, B), C);
		cout << m * 100;
	}
}