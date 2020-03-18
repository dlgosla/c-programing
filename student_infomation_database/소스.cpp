#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
const int max = 50;
ofstream fout;

class Student {
public:
	int id;
	char name[max];
	int sub;//�����
	int *score;//���� ����
	//int avg1 = avg();

	Student();
	Student(const char *name1,int sub,int id1);
	Student(const Student &s);
	~Student();
	double avg();
	void store_in_file();
	void show_data();
	
};
void Student::store_in_file() {

	fout << " " << id << "  " << name << "  " << sub << " ";
	for (int i = 0; i < sub; i++) {
		fout << score[i] << " ";
	}
	fout << endl;
}
double  Student:: avg() {
	double SUM=0,AVG;
	for (int i = 0; i < sub; i++) {
		SUM += score[i];
	}
	AVG = SUM / sub;
	return AVG;
}

void Student::show_data() {
	cout << "���̵�: " << id << " �̸�: " << name << " ���� �����: " << sub<<" ������������: ";
	for (int i = 0; i < sub; i++) {
		cout << score[i] << " ";
	}
	cout << " ���: " << avg() << endl;
}

Student::Student() {
	strcpy_s(name, max, "�̸�����");
	sub = max;
	score = new int[max];
	id = 0;
	for (int i = 0; i < sub; i++) {//����� ��ŭ
		score[i] = 0;
	}

}
Student::Student(const char* name1, int sub, int id1) {
	score = new int[sub];
	for (int i = 0; i < sub; i++) {//����� ��ŭ
		score[i] = 0;
	}
	strcpy_s(name, 50, name1);
	id = id1;

}
Student::Student(const Student &s) {
	score = new int[s.sub];
	for (int i = 0; i < s.sub; i++) {//����� ��ŭ
		score[i] = 0;
	}
	strcpy_s(name, 50, s.name);
	id = s.id;
}
Student::~Student() {
	delete[] score;
	score = NULL;
}

int main() {
	int size;
	cout << "�л���� "<< endl;
	cin >> size;
	
	Student *p = new Student[size];//size��ŭ �л� ��ü����

	int choice,index=0;
	bool found;
	while (true) {
		cout << "------MENU------" << endl;
		cout << "1.�⺻�л������Է�" << endl;
		cout << "2.�����Է�" << endl;
		cout << "3.��ü ���� ����" << endl;
		cout << "4.��ü ȭ����ȸ" << endl;
		cout << "5.���α׷� ����" << endl;
		cout << "���?" << endl;
		cin >> choice;

		switch (choice){
		case 1:
			if (index < size) {
				cout << "�л� ���ڵ� ������ ���� �Է� (���̵� �̸� ���� ��)" << endl;
				cin >> p[index].id >> p[index].name >> p[index].sub;
				index++;
			}
			else {
				cout << "�Է� �л� �� �ʰ�" << endl;
			}
			
			break;
		case 2:
			int ID;
			cout << "ID: " << endl;
			cin >> ID;
			found = false;
			for (int i = 0; i < index; i++) {
				if (p[i].id == ID) {
					for (int j = 0; j < p[i].sub; j++) {//�������ŭ �Է�
						cout << "���� �����Է� " << endl;
						cin >> p[i].score[j];//p[i]��° ��ü�� �������ŭ ��������
					}//����for����
					found = true;
					break;
				}//if����

			}//ūfor����
			if (found == false) {//id��ã����
				cout << "���� id�Դϴ�" << endl;
			}
		
			break;
		case 3:
		
			char file_name[50];
			cout << "���������̸�" << endl;
			cin >> file_name;
			fout.open(file_name,ios::trunc);
			for (int i = 0; i <index ; i++) {
				p[i].store_in_file();
			}

			break;
		case 4:
			for (int i = 0; i < index; i++) {
				p[i].show_data();
			}
			
			break;
		case 5:
			cout << "���α׷��� �����մϴ�" << endl;
			delete[] p; p = NULL;
			fout.close();
			return 0;
			break;

		default:
			cout << "���ڸ� �߸� �Է��ϼ̽��ϴ�" << endl;
			break;
		}


	}


}//main��

