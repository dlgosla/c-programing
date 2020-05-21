#include<iostream>
#include<string>
using namespace std;

class Account {
private:
	string id;
	string name;
	int balance;
	
public:
	static int totalBalance;
	Account() 
		:id(""),name(""),balance(0){}
	~Account() {
		totalBalance += balance;
	}
	string getId() { return id; }
	void setInfo(string _id,string _name,int _balance) {
		id = _id;
		name = _name;
		balance = _balance;
	}
};

int Account::totalBalance = 0;

int main() {
	int totalStudents;
	string name , id;
	int balance;
	cout << "�� �л� �� �Է�: ";
	cin >> totalStudents;
	Account* acntAry = new Account[totalStudents];
	//int sumOfBalance = 0;
	for(int i = 0 ; i < totalStudents; i++) {

		cout << i+1 << "�� ° �л� ���� �Է� : ";
		cout << "�й�: ";
		cin >> id;
		cout << endl;
		cout << endl;
		cout << "�̸�: ";
		cin >> name;
		cout << endl;
		cout << "�ܾ�: ";
		cin >> balance;
	//	sumOfBalance += balance;
		cout << "=======================" << endl;
		acntAry[i].setInfo(id,name,balance);
		for (int j = 0; j < i; j++) {
			if (acntAry[j].getId() == id)
				return 0;
		}
	}

//	cout << "ȸ���� �ݾ�: " << sumOfBalance;
	delete[] acntAry;
	cout << "ȸ���� �ݾ�: " << Account::totalBalance << endl;
}