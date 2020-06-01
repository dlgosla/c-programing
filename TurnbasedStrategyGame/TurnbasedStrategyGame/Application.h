#pragma once
#include "Unit.h"

class ApplicationType {
private:
	vector<Unit*> unit_list_in_barracks; // ��밡�� ���� 4����
	vector<Unit*> unit_list; // ����� ����
	int curr_turn; //���� �� ���۽�1
	int MAX_turn;// ��50
	int gold; //ä���� ���� �� ����1000
	int enermy_hp; // ���� ü��
	int flag_status; // 0 ������ 1 �й� 2 �¸�
public:
	ApplicationType();
	~ApplicationType();

	void increase_turn();
	void print_unit_list_in_barracks();
	void print_unit_list();

	void run();
	string get_command();
	bool hire_unit();
	void attack_to_anemy();
	void gather_money();
};
