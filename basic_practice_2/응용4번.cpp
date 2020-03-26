#include<iostream>
using namespace std;

void swap_call_by_value(int a, int b);
void swap_call_by_reference(int &a, int &b);

int main() {
	int x, y;
	cout << "x �Է�: ";
	cin >> x;

	cout << "y �Է�: ";
	cin >> y;

	cout << "\n";
	
	cout << "swap_call_by_value �Լ� ��� ��" << endl;
	cout << "x= " << x << ", y= " << y << endl;

	swap_call_by_value(x,y);

	cout << "swap_call_by_value �Լ� ��� ��" << endl;
	cout << "x= " << x << ", y= " << y << endl;

	cout << "\n";

	cout << "swap_call_by_reference �Լ� ��� ��" << endl;
	cout << "x= " << x << ", y= " << y << endl;

	swap_call_by_reference(x, y);

	cout << "swap_call_by_reference �Լ� ��� ��" << endl;
	cout << "x= " << x << ", y= " << y << endl;

	return 0;
}

void swap_call_by_value(int a, int b) {
	int swap = a;
	a = b;
	b = swap;
}

void swap_call_by_reference(int &a, int &b) {
	int swap = a;
	a = b;
	b = swap;
}