#pragma once
#include "Unit.h"

class Attacker : public Unit {
protected:
	int attack_point; //���ݷ�
public:
	Attacker(int _type, string _name, int _price, int _point);
	int action() override;
	void print() override;
};
