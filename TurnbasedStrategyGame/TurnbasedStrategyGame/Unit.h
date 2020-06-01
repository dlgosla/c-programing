#pragma once
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