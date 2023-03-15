#pragma once

// TODO: testable function declaration



// Funkcja generująca trójkąt Pascala do określonego poziomu
// TPascala1.cpp/

#include <iostream>
#include <iomanip>

using namespace std;

int C(int n, int k)
{
	if (k == 0 || k == n)
		return 1;
	else
		return C(n - 1, k - 1) + C(n - 1, k);
}

int main()
{
	int nMax;
	cout << "Trojkat Pascala\n---------------\nnMax (0-10): ";
	cin >> nMax;
	cout << "---------------\n";
	for (int n = 0; n <= nMax; n++)
	{
		cout << setw(2) << n << setw(3 * (nMax - n)) << "";
		for (int k = 0; k <= n; k++)
			cout << setw(6) << C(n, k);
		cout << endl;
	}
	return 0;
}


