#include<iostream>
using namespace std;

enum RelationType{LESS, GREATER, EQUAL};
class ItemType{

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

int ItemType::GetId()
{

}
string ItemType::GetName()
{

}
string ItemType::GetAddress()
{

}
void ItemType::SetId(int inid)
{

}
void ItemType::SetName(string inName)
{

}
void ItemType::SetAddress(string inAddress)
{

}
void ItemType::SetRecord(int inId, string inName, string inAddress)
{

}
void ItemType::DisplayIdOnScreen()
{

}
void ItemType::DisplayNameOnScreen()
{

}
void ItemType::DisplayAddressOnScreen()
{

}
void ItemType::DisplayRecordOnScreen()
{

}
void ItemType::SetIdFromKB()
{

}
void ItemType::SetNameFromKB()
{

}
void ItemType::SetAddressFromKB()
{

}
void ItemType::SetRecordFromKB()
{

}
int ItemType::ReadDataFromFile(ifstream& fin)
{

}
int ItemType::WriteDataToFile(ofstream& fout)
{

}
RelationType ItemType::CompareByID(const ItemType &data)
{

}