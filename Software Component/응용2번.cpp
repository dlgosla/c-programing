#include<iostream>
#include<string>
using namespace std;

class Account {
private:
	string name;
	string id;
	int balance;
public:

	Account(string _name = "", string _id="", int _balance = 0)
		:name(_name), id(_id), balance(_balance) {}
	string getName() { return name; }
	string getId() { return id; }
	int getBalance() { return balance; }
	Account operator+(Account& Obj) {
		this->balance += Obj.balance;
		return *this;
	//	Account sum(name, id, balance);
	//	sum.balance = this->balance + Obj.balance;
	//	return sum;
	}
	Account operator-(Account& Obj) {
		this->balance -= this->balance;
		return *this;
	//	Account dif(name, id, balance);
	//	dif.balance -= dif.balance;
	//	return dif;
	}

	friend ostream& operator<<(ostream& cout, const Account& obj) {
		cout << "�й�: " << obj.id << ", " << "�̸�: " << obj.name << ", �ܾ�: " << obj.balance << endl;
		return cout;
	}
};

int main() {
	Account acnt[3] = {
		Account("����ȣ" , "2014" , 10000),
		Account("������" , "2019" , 0),
		Account("������" , "2013" , 5000),
	};
	string give, take;
	bool existingID = false;
	while (true) {
		cout << "���� ���� �л��� �й��� �Է��ϼ���: ";
		cin >> give;
		if (give == "����") {
			cout << "�����մϴ�." << endl;
			for (int i = 0; i < 3; i++)
				cout << acnt[i];
			return 0;
		}
		cout << "���� ���� �л��� �й��� �Է��ϼ���: ";
		cin >> take;
		int giveIdx = -1, takeIdx = -1;
		for (int i = 0; i < 3; i++) {
			if (acnt[i].getId() == give) {
				giveIdx = i;
			}
			else if (acnt[i].getId() == take) {
				takeIdx = i;
			}
		}

		if (give == take) {
			cout << "������ �й��Դϴ�" << endl;
			continue;
		}
		else if (giveIdx == -1 || takeIdx == -1) {
			cout << "������ �л� Ȥ�� ���� �л��� �й��� �������� �ʽ��ϴ�. �ٽ� �Է����ּ���." << endl;
			continue;
		}
		else if (acnt[giveIdx].getBalance() == 0) {
			cout << "���� �л��� �ܾ��� �����մϴ�." << endl;
			continue;
		}

		acnt[takeIdx] + acnt[giveIdx];
		acnt[giveIdx] - acnt[giveIdx];

		cout << "���� �л��� �ܾ� => " << acnt[giveIdx];
		cout << "���� �л��� �ܾ� => " << acnt[takeIdx];

	}
}