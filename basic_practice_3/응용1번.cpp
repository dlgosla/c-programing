#include<iostream>
using namespace std;

int main() {
	int num;
	
	for (int i = 1; i <= 5; i++) {
		cout << i << "�� ° ����: ";
		cin >> num;

		if (num % 2 == 0)
			cout << num << "��(��) ¦�� �Դϴ�." << endl;
		else
			cout << num << "��(��) Ȧ�� �Դϴ�." << endl;
	}

	return 0;
}