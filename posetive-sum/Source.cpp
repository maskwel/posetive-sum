#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	const int size = 15;
	int sum = 0;
	int n;

	int* mas = new int[size];
	for (int i = 0; i < size; i++) {
		cout << "������� �����: ";
		cin >> mas[i];
		n = mas[i];
		if (n > 0) {
			sum += n;
		}
	}
	cout << "����� ������������� �����: " << sum;
}
