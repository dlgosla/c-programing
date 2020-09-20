#include "ArrayList.h"

bool ArrayList::isEmpty()
{
	/*
		precondition: m_Array�� ���ǵ� �־����
		postcondition: �迭�� ������� true, �Ⱥ������ false�� ����
	*/
	
	if (m_Length == 0)
		return true; //�����
	return false; //�Ⱥ����
}
int ArrayList::Get(ItemType& data)
{ /* 
	precondition: m_Array�� data�� �־�� �� 
	postcondition: data�� ã���� �ش絥���Ϳ� ���� �����ϰ� 1, ��ã���� 0�� ����
  */
	for (int i = 0; i < GetLength(); i++)
	{
		if (m_Array[i].CompareByID(data) == EQUAL)
		{
			data.SetRecord(m_Array[i].GetId(), m_Array[i].GetName(), m_Array[i].GetAddress());
			data.DisplayRecordOnScreen(); 
			return 1;
		}
	}
	return 0;
	
}
int ArrayList::Delete(ItemType data)
{
	/*
		precondition: m_Array�� data�� �־�� �Ѵ�
		postcondition: m_Array���� data�� ��ġ�ϴ� ���� ã�� ����
					   �����ϸ� 1, �����ϸ� 0�� ��ȯ
	*/
	for (int i = 0; i < m_Length ; i++)
	{
		if (m_Array[i].CompareByID(data) == EQUAL)
		{
			m_Array[i] = m_Array[m_Length - 1];
			m_Length--;
			return 1;
		}
	}
	return 0;
}
int ArrayList::Replace(ItemType data)
{
	/*
		precondition: m_Array�� data�� �־���Ѵ�.
		postcondition: �Էµ� data�� ������ ����� ã�� �ش� ����� data�� ġȯ�Ѵ�
					   �����ϸ� 1, �����ϸ� 0�� ��ȯ
	*/
	for (int i = 0; i < m_Length; i++)
	{
		if (m_Array[i].CompareByID(data) == EQUAL)
		{
			m_Array[i].SetRecord(data.GetId(), data.GetName(), data.GetAddress());
			return 1;
		}
	}
	return 0;
}

void ArrayList::MakeEmpty()
{
	/*
		precondition: m_Array�� ���ǵ��־���Ѵ�
		postcondition: m_Length�� 0���� �����ؼ� �󸮽�Ʈ�� �����
	*/
	m_Length = 0; //����Ʈ�� ����� ���ڵ� ��
}


int ArrayList::GetLength()
{
	/*
		precondition: m_Array�� ���ǵ��־���Ѵ�
		postcondition: m_Length�� ��ȯ�Ѵ�
	*/
	return m_Length;
}


bool ArrayList::isFull()
{
	/*
		precondition: m_Array�� ���ǵ��־���Ѵ�
		postcondition: ��á���� true, �ƴϸ� false�� �����Ѵ�
	*/
	if (m_Length + 1 == MAXSIZE)
		return true;
	return false;
}


int ArrayList::Add(ItemType data)
{
	/*
	precondition: m_Array�� ���ǵ��־���Ѵ�, data�� m_Array�� ����� �Ѵ�
	postcondition: �� �ڿ� data�� �߰��ϰ� �����ϸ� 1, �����ϸ� 0�� ��ȯ
	*/
	if (!isFull())
	{
		m_Array[m_Length] = data;
		m_Length++;
		return 1;
	}
	else
		return 0;
}


void ArrayList::ResetList()
{
	/*
		precondition: m_CurPointer�� ���ǵ��־�� �Ѵ�
		postcondition: m_CurPointer �� -1�� �����Ѵ�
	*/
	m_CurPointer = -1;
}


int ArrayList::GetNextItem(ItemType & data)
{
	/*
	precondition: m_Array�� ���ǵ� �־�� �Ѵ�
	postcondition: data�� m_CurPointer��ġ�� �����ϰ� m_CurPointer�� ��ȯ, ���н� -1��ȯ
	*/
	m_CurPointer++;
	if (m_CurPointer == MAXSIZE) {
		return -1;
	}
	data = m_Array[m_CurPointer];
	return m_CurPointer;
}