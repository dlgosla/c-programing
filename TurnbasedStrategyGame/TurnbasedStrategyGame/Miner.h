#pragma once
#include "Unit.h"

class Miner : public Unit {
protected:
	int mining_point; //ä����
public:
	Miner(int _type, string _name, int _price, int _point);
	int action() override;
	void print() override;
};