#include<iostream>
#include<cmath>
using namespace std;

class Point {
	int x, y;
public:
	Point(int _x = 0, int _y = 0)
		:x(_x), y(_y){}
	Point operator-(const Point& obj) {
		Point dif;
		dif.x = this->x - obj.x;
		dif.y = this->y - obj.y;
		return dif;
	}
	Point operator*(const Point& obj) {
		Point mult;
		mult.x = this->x * obj.x;
		mult.y = this->y * obj.y;
		return mult;
	}
	void setPoint(int _x, int _y) {
		x = _x;
		y = _y;
	}
	int getX() {
		return x;
	}
	int getY() {
		return y;
	}

};

int main() {
	int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
	Point* pP1, *pP2, *pP3;

	cout << "ù��° ��ǥ(x1,y1)�� �Է��ϼ��� : ";
	cin >> x1 >> y1;

	cout << "�ι�° ��ǥ(x2,y2)�� �Է��ϼ��� : ";
	cin >> x2 >> y2;

	pP1 = new Point(x1, y1);
	pP2 = new Point(x2, y2);
	pP3 = new Point();

	//pP1->setPoint(x1, y1);
	//pP1->setPoint(x2, y2);

	*pP3 = (*pP1 - *pP2)*(*pP1 - *pP2);
	double length = sqrt(pP3->getX() + pP3->getY());
	cout << "�� ��ǥ ������ ���̴� "<< length <<"�Դϴ�. " << endl;
}