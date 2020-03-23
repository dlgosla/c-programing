#include<iostream>
#include "stacktemplate.h"
using namespace std;

int main() {
	char text[100];
	char choice;
	int len;

	while (true) {
		cout << "������ �ؽ�Ʈ �Է�: " << endl;
		cin.getline(text, 100);
		len = strlen(text);
		
		Stack<char> s(len);

		for (int i = 0; i < len; i++) {
			s.push(text[i]);
		}

		cout << "�Էµ� �ؽ�Ʈ�� �Ųٷ� ����ϱ�" << endl;
		int n = s.getTopIndex();
		for (int i = 0; i <= n; i++) {
			cout << s.pop();
		}
		cout << "\n";

		cout << "��� ����?(Y/N)" << endl;
		cin >> choice;

		if (choice == 'Y' || choice == 'y') {
			cin.clear();
			cin.ignore();
		}

		else if (choice == 'N' || choice == 'n') {
			return 0;
		}
	}

	return 0;
}