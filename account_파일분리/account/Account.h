#ifndef ACCOUNT_H
#define ACCOUNT_H

class ACT {
public:
	char *name;
	int id;
	int balance;

	ACT();
	ACT(const char *n, int i, int b);
	ACT(const ACT &a);
	~ACT();
	void showAllData();
	void inmoney(int val);//�̸�ŭ �����ִ°�
	bool outmoney(int val);//�̸�ŭ ���ִ°� val��ŭ������ false����
};
#endif