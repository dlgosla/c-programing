#include<iostream>
#include<string>
#include<fstream>
using namespace std;

enum RelationType { LESS, GREATER, EQUAL };
class ItemType {

public:
	int GetId();
	string GetName();
	string GetAddress();
	void SetId(int inid);
	void SetName(string inName);
	void SetAddress(string inAddress);
	void SetRecord(int inId, string inName, string inAddress);
	void DisplayIdOnScreen();
	void DisplayNameOnScreen();
	void DisplayAddressOnScreen();
	void DisplayRecordOnScreen();
	void SetIdFromKB();// Ű������л�ID�Է��Լ�
	void SetNameFromKB();// Ű������л��̸��Է��Լ�
	void SetAddressFromKB();// Ű������л��ּ��Է��Լ�
	void SetRecordFromKB();// Ű������л������Է��Լ�
	int ReadDataFromFile(ifstream& fin);// �л����������Ͽ����д��Լ�
	int WriteDataToFile(ofstream& fout);// �л����������Ϸ�����ϴ��Լ�
	RelationType CompareByID(const ItemType &data);// primary key (ID)�����������л����������ϴ��Լ�

private:
	int m_Id;
	string m_sName;
	string m_sAddress;

};