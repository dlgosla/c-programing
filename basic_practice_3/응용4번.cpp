#include<iostream>
using namespace std;

int main() {
	
	int dan;

	do {

		cout << "�� ���� �Է��ϼ���: ";
		cin >> dan;

		if (!(1 <= dan && dan <= 9)) {
			cout << "1���� 9������ ������ �Է����ּ���. " << endl;
			continue;
		}
		for (int i = 1; i <= 9; i++)
			cout << dan << " * " << i << " = " << dan * i << endl;
	
	} while (!(dan == -1));

	return 0;
}