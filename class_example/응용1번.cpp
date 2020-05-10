#include<iostream>
#include<string>
using namespace std;

class CStudent {
private:
	int number;
	string name;
	string major;

public:
	CStudent()
		:number(2018000000), name("ȫ�浿"), major("��ǻ�Ͱ��а�"){}

	CStudent(int _number, string _name, string _major)
		:number(_number),name(_name),major(_major){}
	int getNumber() { return number; }
	void setNumber(int _number) { number = _number; }
	string getName() { return name; }
	void setName(string _name) { name = _name; }
	string getMajor() { return major; }
	void setMajor(string _major) { major = _major; }

	void Display() {
		cout << "�й�: " << number << endl;
		cout << "�̸�: " << name << endl;
		cout << "����: " << major << endl;
		cout << endl;
	}

};

int main() {
	CStudent s1;
	s1.Display();

	CStudent s2(1999000000, "����ö", "���ؿ�ȭ��");
	s2.Display();

	s1.setNumber(2006000000);
	s1.setName("�ΰ���");
	s1.setMajor("����Ʈ���");

	cout << "�й�: " << s1.getNumber() << endl;
	cout << "�̸�: " << s1.getName() << endl;
	cout << "����: " << s1.getMajor() << endl;

	return 0;
}