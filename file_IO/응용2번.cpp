#include<iostream>
#include<string>

using namespace std;

//���ڿ��� ,�������� �ڸ���
string slicingStr(string data, int& i,int start, int& length) {
	if (i != 0)
		start = data.find(",", i) + 1;
	length = data.find(",", start + 1) - start;
	string slicedStr = data.substr(start, length);
	return slicedStr;
}

//�߶��� ���ڿ����� keyword�� ���Ե� ���ڿ��� ã�´�
string findKeyword(string slicedStr,string keyword) {
	if (slicedStr.find(keyword) != string::npos)
		return slicedStr+" ";
	return "";
}

int main() {
	string data = "���,���α׷���,����,����ǹٺ�,���뿪,õ���ǻ��,�����,��ü����";
	string keyword, searchResult;

	cout << "Ű����: ";
	cin >> keyword;

	int i = 0, start = 0, length;
	while (data.find(keyword, i) != string::npos) { 
		string slicedStr = slicingStr(data, i, start, length);  // ���ڿ��� �ڸ���
		searchResult += findKeyword(slicedStr, keyword);  //�߶��� ���ڿ� �� keyword�� ���Ե� ���ڿ��� ��� �����Ѵ�.
		i += length;
	}

	cout << "�˻����: " << searchResult << endl;

}