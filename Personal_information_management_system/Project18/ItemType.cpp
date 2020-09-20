#include "ItemType.h"

int ItemType::GetId()
{
	return m_Id;
}
string ItemType::GetName()
{
	return m_sName;
}
string ItemType::GetAddress()
{
	return m_sAddress;
}
void ItemType::SetId(int inid)
{
	m_Id = inid;
}
void ItemType::SetName(string inName)
{
	m_sName = inName;
}
void ItemType::SetAddress(string inAddress)
{
	m_sAddress = inAddress;
}
void ItemType::SetRecord(int inId, string inName, string inAddress)
{
	m_Id = inId;
	m_sName = inName;
	m_sAddress = inAddress;
}
void ItemType::DisplayIdOnScreen()
{
	cout << "�л� id: " << m_Id << endl;
}
void ItemType::DisplayNameOnScreen()
{
	cout << "�л� �̸�: " << m_sName << endl;
}
void ItemType::DisplayAddressOnScreen()
{
	cout << "�л� �ּ�: " << m_sAddress << endl;
}
void ItemType::DisplayRecordOnScreen()
{
	cout << "�л� id: " << m_Id << "�л� �̸�: " << m_sName << "�л� �ּ�: " << m_sAddress << endl;
}
void ItemType::SetIdFromKB()
{
	cout << "�л�id�� �Է����ּ���: ";
	cin >> m_Id;
}
void ItemType::SetNameFromKB()
{
	cout << "�л��̸��� �Է����ּ���: ";
	cin >> m_sName;
}
void ItemType::SetAddressFromKB()
{
	cout << "�л� �ּҸ� �Է����ּ���: ";
	cin >> m_sAddress;
}
void ItemType::SetRecordFromKB()
{
	SetIdFromKB();
	SetNameFromKB();
	SetAddressFromKB();

}
int ItemType::ReadDataFromFile(ifstream& fin)
{
	fin >> m_Id;
	fin >> m_sName;
	fin >> m_sAddress;

	fin.close();

	return 1;
}
int ItemType::WriteDataToFile(ofstream& fout)
{
	fout << m_Id << " " << m_sName << " " << m_sAddress << endl;
	return 1;
}
RelationType ItemType::CompareByID(const ItemType &data)
{
	if (data.m_Id > m_Id)
		return LESS;

	else if (data.m_Id < m_Id)
		return GREATER;
	else
		return EQUAL;

}