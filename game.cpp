#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Unit {
protected:
	int type; //0 : ���� 1:ä��
	string name; //�����̸�
	int price; //���ְ���
public:
	Unit(int _type, string _name, int _price)
		:type(_type), name(_name), price(_price) {}
	int get_type() { return type; }
	string get_name() { return name; }
	int get_price() { return price; }
	virtual int action() = 0;
	virtual void print() = 0;
};

class Attacker : public Unit {
protected:
	int attack_point; //���ݷ�
public:
	Attacker(int _type, string _name, int _price, int _point)
		:Unit::Unit(_type,  _name, _price), attack_point(_point){}
	int action() override { return attack_point; }
	void print() override {
		cout << "[Attacker] Name:" << name << "(Mining point: " << attack_point << ", Price: ", price;
	}
};

class Miner : public Unit {
protected:
	int mining_point; //ä����
public:
	Miner(int _type, string _name, int _price, int _point)
		:Unit::Unit(_type, _name, _price), mining_point(_point) {}
	int action() override { return mining_point; }
	void print() override {
		cout << "[Miner] Name:" << name << "(Mining point: " << mining_point << ", Price: ", price;
	}
};

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
ApplicationType::ApplicationType() {
	unit_list_in_barracks.push_back(new Attacker(1, "swordsMan", 300, 10));
	unit_list_in_barracks.push_back(new Attacker(1, "champion", 1200, 1));
	unit_list_in_barracks.push_back(new Miner(0, "farmer", 200, 20));
	unit_list_in_barracks.push_back(new Miner(0, "landlord", 500, 50));

	curr_turn = 1;
	MAX_turn = 50;
	gold = 1000;
	enermy_hp = 500;
	flag_status = 0;
}
ApplicationType::~ApplicationType() {
	for (auto elem : unit_list_in_barracks){
		delete elem;
	}
	for (auto elem : unit_list){
		delete elem;
	}
}
void ApplicationType::increase_turn(){
	curr_turn++;
	if (curr_turn == MAX_turn) {
		flag_status = 1;
		cout << "You lose" << endl;
	}
}
void ApplicationType::print_unit_list_in_barracks(){
	for (Unit* elem : unit_list_in_barracks){
		elem->print();
	}
}
void ApplicationType::print_unit_list(){
	for (Unit* elem : unit_list){
		elem->print();
	}
}
void ApplicationType::ApplicationType::run() {
	string sOption;
	while (flag_status == 0) {
		sOption = get_command();
		if (sOption == "1") hire_unit();
		else if (sOption == "2") attack_to_anemy();
		else if (sOption == "3") gather_money();
		else if (sOption == "4") print_unit_list();
		else if (sOption == "5") break;
	}
	cout << "Exit the program..." << endl;
}
string ApplicationType::get_command(){
	cout << "Turn: " << curr_turn << "/" << MAX_turn << endl;
	cout << "Gold: " << gold << endl;
	cout << "Enemy HP: " << enermy_hp << endl;
	cout << endl;

	string input;
	cout << "1. Hire Unit" << endl;
	cout << "2. Attack to Enermy" << endl;
	cout << "3. Gather Money" << endl;
	cout << "4. print Units" << endl;
	cout << "input> ";
	cin >> input;

	return input;
}
bool ApplicationType::hire_unit(){
	print_unit_list_in_barracks();
}
void ApplicationType::attack_to_anemy(){}
void ApplicationType::gather_money(){}



int main() {
	ApplicationType appType;
	appType.run();
}