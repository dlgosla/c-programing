#include<iostream>
#include<time.h>
using namespace std;

int main()
{
	int num[9] = { 1,2,3,4,5,6,7,8,9 };
	int answer[3] = {};
	srand((unsigned)time(0));

	//����
	for (int i = 0; i < 100; i++)
	{
		int idx1 = rand() % 9;
		int idx2 = rand() % 9;

		int temp = num[idx1];
		num[idx1] = num[idx2];
		num[idx2] = temp;
	}

	//������ ���� 3�� �̱�
	for (int i = 0; i < 3; i++) {
		answer[i] = num[i];
	}

	while (true) {
		int user[3];
		cout << "������ ���ڸ� �Է��� �ּ���" << endl;
		cin >> user[0] >> user[1] >> user[2];

		for (int i = 0; i < 3; i++) {
			if (user[i] == 0)
				return 0;
		}
		int stlike = 0, ball = 0;

		for (int i = 0; i < 3; i++)
		{
			if (user[i] == answer[i])
				stlike++;
			else
				for (int j = 0; j < 3; j++) {
					if (user[i] == answer[j])
						ball++;
				}
		}
		if (stlike == 0 && ball == 0)
		{
			cout << "out" << endl;
			continue;
		}
		cout << stlike << "stlike, " << ball << "ball" << endl;
		cout << endl;

		if (stlike == 3)
		{
			cout << "����: " << answer[0] << " " << answer[1] << " " << answer[2] << endl;
			return 0;
		}

	}
	
	
}







