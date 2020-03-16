#include<iostream>
#include "Account.h"
using namespace std;
const int MAX_NAME = 50;

void printMenu() {
	cout << "----------NENU---------" << endl;
	cout << "1.���°輳" << endl;
	cout << "2(�Ա�)" << endl;
	cout << "3(���)" << endl;
	cout << "4(��ü��ȸ)" << endl;
	cout << "5(����)" << endl;
	cout << "-----------------------" << endl;
}

enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };// ����ũ�� 1 ���� 2345~~

void MakeAct(ACT*DyArr, int &index, int size);
void Deposit(ACT*DyArr, int index);
void Withdraw();
void Inquire(ACT*DyArr, int index);
void Exit();

void MakeAct(ACT*DyArr, int &index, int size) {
	//cout << "���°���" << endl;
	//if (index < size) {
	//	cout << "���̵� �Է�" << endl;
	//	cin >> DyArr[index].id;
	//	cout << "�̸� �Է�" << endl;
	//	cin >> DyArr[index].name;
	//	cout << "�ܾ� �Է�" << endl;
	//	cin >> DyArr[index].balance;
	//	index++;
	//}

	//else {
	//	cout << "���°��� �Ұ�" << endl;

	//}


	int id, balance;
	char name[MAX_NAME];

	if (index < size) {
		cout << "���°����� ���� �Է�(id �ܾ� �̸�)" << endl;
		cin >> id >> balance >> name;
		(DyArr + index)->id = id;
		DyArr[index].balance = balance;
		strcpy_s(DyArr[index].name, strlen(name) + 1, name);

	}
	else {
		cout << "����" << endl;

	}



	//����ڿ��� ���� ����,���̵�,�ܾ�,�̸� �ޱ����� �ε����� ����� ��\
		//INDEX��ġ�� ��ҿ� ID �ܾ� �̸��� �����Ѵ� 
//�ε����� ������Ų�� 
//�ƴϸ� ���°����� �� �� ������ �˸���

}
void Deposit(ACT*DyArr, int index) {//���� id�� �Աݾ��� ���´�.
	int input, id;
	cout << "�Ա�" << endl; //21�� å������ ����
	cout << "���� id , �Աݾ� �Է�" << endl;
	cin >> id >> input;
	bool found = false;

	for (int i = 0; i < index; i++) {
		if (id == DyArr[i].id) {
			DyArr[i].inmoney(input);
		}

		else
			cout << "id ����" << endl;
	}
}


void Withdraw() {
	cout << "���" << endl;
}
void Inquire(ACT*DyArr, int index) {

	for (int i = 0; i < index; i++)
		DyArr[i].showAllData();

}

void Exit() {
	cout << "����" << endl;
}

int main() {

	cout << "���¸?" << endl;
	int size;
	cin >> size;
	//���� ACT��ü�迭 �����
	ACT *DyArr = new ACT[size];
	int index = 0;
	int choice = 0;

	while (true) {
		printMenu();
		cout << "����:";
		cin >> choice;

		switch (choice) {
		case MAKE:
			MakeAct(DyArr, index, size);
			break;

		case DEPOSIT:
			Deposit(DyArr, index);
			break;
		case WITHDRAW:
			Withdraw();
			break;
		case INQUIRE:
			Inquire(DyArr, index);//���Ⱑ�� index �Ⱥ��ؼ� �ݹ��� ���
			break;

		case EXIT:
			Exit();
			return 0;
		default:
			cout << "������ Ʋ����" << endl;
			break;
		}
	}


	//ACT a1("ȫ����", 1, 10000);
	//a1.showAllData();
	//
	//a1.inmoney(5000);
	//a1.outmoney(20000);
	//a1.showAllData();

}