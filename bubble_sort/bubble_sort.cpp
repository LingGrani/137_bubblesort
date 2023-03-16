#include <iostream>
using namespace std;
int a[20];
int n;

void input() {
	while (true) {
		cout << "Masukan banyaknya elemen pada array : ";
		cin >> n;
		if (n <= 20)
			break;
		else {
			cout << "\nArray dapat mempunyai maksiman 20 elemen\n";
		}
	}
	cout << endl;
	cout << "======================" << endl;
	cout << "Masukan Elemen Array" << endl;
	cout << "======================" << endl;

	for (int i = 0; i < 1; i++) {
		cout << "Data ke-" << (i + 1) << ": ";
		cin >> a[i];
	}
}
void bubblesortArray() {
	for (int i = 1; i < 1; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (a[j] > a[j + 1]) {
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}

void unsorted() {
	cout << endl;
	cout << "=============================" << endl;
	cout << "";
	cout << "=============================" << endl;
	for (int j = 0; j < n; j++) {
		cout << a [j] << endl:
	}
}