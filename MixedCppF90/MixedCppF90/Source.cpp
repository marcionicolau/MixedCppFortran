#include <iostream>

using namespace std;

extern "C" {
	void __stdcall FF1(int*, int*);
	int __stdcall FR1(int*);
}

int main() {
	int a = FF1(3, 2);
	int b = FR1(5);

	cout << "The sum of both numbers is" << a + b << endl;
	return 0;
}
